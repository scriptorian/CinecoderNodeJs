/* Copyright 2016 Streampunk Media Ltd.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#include <nan.h>
#include "Encoder.h"
#include "MyWorker.h"
#include "Timer.h"
#include "Memory.h"
#include "EncoderFactory.h"
#include "EssenceInfo.h"

#include <memory>

using namespace v8;

namespace streampunk {

uint32_t beToLe32 (uint32_t be) {
  uint8_t *pB = (uint8_t *)&be;
  return (pB[0] << 24) | (pB[1] << 16) | (pB[2] << 8) | pB[3];
}

class EncodeProcessData : public iProcessData {
public:
  EncodeProcessData (Local<Object> srcBuf, Local<Object> dstBuf)
    : mSrcBuf(Memory::makeNew((uint8_t *)node::Buffer::Data(srcBuf), (uint32_t)node::Buffer::Length(srcBuf))),
      mDstBuf(Memory::makeNew((uint8_t *)node::Buffer::Data(dstBuf), (uint32_t)node::Buffer::Length(dstBuf)))
    { }
  ~EncodeProcessData() { }
  
  std::shared_ptr<Memory> srcBuf() const { return mSrcBuf; }
  std::shared_ptr<Memory> dstBuf() const { return mDstBuf; }

private:
  std::shared_ptr<Memory> mSrcBuf;
  std::shared_ptr<Memory> mDstBuf;
};


Encoder::Encoder(Nan::Callback *callback) 
  : mWorker(new MyWorker(callback)), mFrameNum(0), mSetInfoOK(false) {
  AsyncQueueWorker(mWorker);
}
Encoder::~Encoder() {}

// iProcess
uint32_t Encoder::processFrame (std::shared_ptr<iProcessData> processData, std::string &errStr) {
  Timer t;
  std::shared_ptr<EncodeProcessData> epd = std::dynamic_pointer_cast<EncodeProcessData>(processData);

  // do the encode
  uint32_t dstBytes = 0;
  mEncoderDriver->encodeFrame (epd->srcBuf(), epd->dstBuf(), mFrameNum++, &dstBytes, errStr);
  printf("encode : %.2fms\n", t.delta());

  return dstBytes;
}

void Encoder::doSetInfo(Local<Object> srcTags, Local<Object> dstTags, const Duration& duration,
                        Local<Object> encodeTags) {
  mSrcVidInfo = std::make_shared<EssenceInfo>(srcTags); 
  printf ("Encoder SrcVidInfo: %s\n", mSrcVidInfo->toString().c_str());
  mDstVidInfo = std::make_shared<EssenceInfo>(dstTags); 
  printf("Encoder DstVidInfo: %s\n", mDstVidInfo->toString().c_str());
  std::shared_ptr<EncodeParams> encodeParams = std::make_shared<EncodeParams>(encodeTags);

  if (mSrcVidInfo->packing().compare("UYVY10") && mSrcVidInfo->packing().compare("v210")) {
    std::string err = std::string("Unsupported source format \'") + mSrcVidInfo->packing().c_str() + "\'";
    return Nan::ThrowError(err.c_str());
  }
  if (mDstVidInfo->packing().substr(0, 4).compare("AVCi")) {
    std::string err = std::string("Unsupported codec type \'") + mDstVidInfo->packing() + "\'";
    Nan::ThrowError(err.c_str());
    return;
  }
  if ((mSrcVidInfo->width() % 2) || (mDstVidInfo->width() % 2)) {
    std::string err = std::string("Width must be divisible by 2 - src ") + std::to_string(mSrcVidInfo->width()) + ", dst " + std::to_string(mDstVidInfo->width());
    Nan::ThrowError(err.c_str());
  }
  if ((mSrcVidInfo->width() != mDstVidInfo->width()) || (mSrcVidInfo->height() != mDstVidInfo->height())) {
    std::string err = std::string("Unsupported dimensions \'") + std::to_string(mSrcVidInfo->width()) + "x" + std::to_string(mSrcVidInfo->height()) + "\'";
    return Nan::ThrowError(err.c_str());
  }
  if ((0 == mDstVidInfo->packing().compare("AVCi800")) && ((mDstVidInfo->width() < 3840) || (mDstVidInfo->height() < 2160))) {
    std::string err = std::string("AVC Ultra encoding requires UHD frame \'") + std::to_string(mDstVidInfo->width()) + "x" + std::to_string(mDstVidInfo->height()) + "\'";
    Nan::ThrowError(err.c_str());
    return;
  }
  if ((0 != mDstVidInfo->packing().compare("AVCi800")) && ((mDstVidInfo->width() > 1920) || (mDstVidInfo->height() > 1080))) {
    std::string err = std::string("UHD encoding requires AVC Ultra \'") + std::to_string(mDstVidInfo->width()) + "x" + std::to_string(mDstVidInfo->height()) + "\'";
    Nan::ThrowError(err.c_str());
    return;
  }

  try {
    mEncoderDriver = EncoderFactory::createEncoder(mSrcVidInfo, mDstVidInfo, duration, encodeParams);
  } catch (std::exception& err) {
    return Nan::ThrowError(err.what());
  }
}

NAN_METHOD(Encoder::SetInfo) {
  if (info.Length() != 4)
    return Nan::ThrowError("Encoder SetInfo expects 4 arguments");
  if (!info[0]->IsObject())
    return Nan::ThrowError("Encoder SetInfo requires a valid source info object as the first parameter");
  if (!info[1]->IsObject())
    return Nan::ThrowError("Encoder SetInfo requires a valid destination info object as the second parameter");
  if (!info[2]->IsObject())
    return Nan::ThrowError("Encoder SetInfo requires a valid duration buffer as the third parameter");
  if (!info[3]->IsObject())
    return Nan::ThrowError("Encoder SetInfo requires a valid params object as the fourth parameter");
  Local<Object> srcTags = Local<Object>::Cast(info[0]);
  Local<Object> dstTags = Local<Object>::Cast(info[1]);
  Local<Object> durObj = Local<Object>::Cast(info[2]);
  Local<Object> encodeTags = Local<Object>::Cast(info[3]);

  Encoder* obj = Nan::ObjectWrap::Unwrap<Encoder>(info.Holder());

  uint32_t *pDur = (uint32_t *)node::Buffer::Data(durObj);
  uint32_t durNum = beToLe32(*pDur++);
  uint32_t durDen = beToLe32(*pDur);
  Duration duration(durNum, durDen);

  Nan::TryCatch try_catch;
  obj->doSetInfo(srcTags, dstTags, duration, encodeTags);
  if (try_catch.HasCaught()) {
    obj->mSetInfoOK = false;
    try_catch.ReThrow();
    return;
  }

  obj->mSetInfoOK = true;
  info.GetReturnValue().Set(Nan::New(obj->mEncoderDriver->bytesReq()));
}

NAN_METHOD(Encoder::Encode) {
  if (info.Length() != 3)
    return Nan::ThrowError("Encoder Encode expects 3 arguments");
  if (!info[0]->IsObject())
    return Nan::ThrowError("Encoder Encode requires a valid source buffer as the first parameter");
  if (!info[1]->IsObject())
    return Nan::ThrowError("Encoder Encode requires a valid destination buffer as the second parameter");
  if (!info[2]->IsFunction())
    return Nan::ThrowError("Encoder Encode requires a valid callback as the third parameter");

  Local<Object> srcBuf = Local<Object>::Cast(info[0]);
  Local<Object> dstBuf = Local<Object>::Cast(info[1]);
  Local<Function> callback = Local<Function>::Cast(info[2]);

  Encoder* obj = Nan::ObjectWrap::Unwrap<Encoder>(info.Holder());

  if (!obj->mSetInfoOK)
    return Nan::ThrowError("Encoder Encode called with incorrect setup parameters");

  std::shared_ptr<iProcessData> epd = std::make_shared<EncodeProcessData>(srcBuf, dstBuf);
  obj->mWorker->doFrame(epd, obj, new Nan::Callback(callback));

  info.GetReturnValue().Set(Nan::New(obj->mWorker->numQueued()));
}

NAN_METHOD(Encoder::Quit) {
  if (info.Length() != 1)
    return Nan::ThrowError("Encoder quit expects 1 argument");
  if (!info[0]->IsFunction())
    return Nan::ThrowError("Encoder quit requires a valid callback as the parameter");
  Nan::Callback *callback = new Nan::Callback(Local<Function>::Cast(info[0]));
  Encoder* obj = Nan::ObjectWrap::Unwrap<Encoder>(info.Holder());

  if (obj->mWorker != NULL)
    obj->mWorker->quit(callback);

  info.GetReturnValue().SetUndefined();
}

NAN_MODULE_INIT(Encoder::Init) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Encoder").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  SetPrototypeMethod(tpl, "setInfo", SetInfo);
  SetPrototypeMethod(tpl, "encode", Encode);
  SetPrototypeMethod(tpl, "quit", Quit);

  constructor().Reset(Nan::GetFunction(tpl).ToLocalChecked());
  Nan::Set(target, Nan::New("Encoder").ToLocalChecked(),
    Nan::GetFunction(tpl).ToLocalChecked());
}

} // namespace streampunk
