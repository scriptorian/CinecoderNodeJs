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

#ifndef ENCODERFACTORY_H
#define ENCODERFACTORY_H

#include <memory>
#include "EssenceInfo.h"
#if defined _WIN32
  #include "EncoderCinegy.h"
#elif defined _LINUX
#endif
#include "EncodeParams.h"

namespace streampunk {

class Duration;

class EncoderFactory {
public:
  static std::shared_ptr<iEncoderDriver> createEncoder(std::shared_ptr<EssenceInfo> srcInfo, std::shared_ptr<EssenceInfo> dstInfo, 
                                                       const Duration& duration, std::shared_ptr<EncodeParams> encodeParams) {
    if (0 == dstInfo->packing().substr(0, 4).compare("AVCi")) {   
      #if defined _WIN32
        return std::make_shared<EncoderCinegy>(srcInfo, dstInfo, duration);
      #else
        throw std::runtime_error("No implementation of AVCi encoder available");
      #endif
    }
    else {
      std::string err = std::string("No implementation of \'") + dstInfo->packing() + "\' encoder available";
      throw std::runtime_error(err.c_str());
    }
  }
};

} // namespace streampunk

#endif
