﻿/* Copyright 2017 Cinegy GmbH.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  The version of Cinecoder for these headers should be: 3.27.39.11441
*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Mar 13 23:56:57 2017
 */
/* Compiler settings for Cinecoder.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Cinecoder_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _Cinecoder_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Cinecoder_MIDL_TYPE_FORMAT_STRING;

typedef struct _Cinecoder_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Cinecoder_MIDL_PROC_FORMAT_STRING;

typedef struct _Cinecoder_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Cinecoder_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Cinecoder_MIDL_TYPE_FORMAT_STRING Cinecoder__MIDL_TypeFormatString;
extern const Cinecoder_MIDL_PROC_FORMAT_STRING Cinecoder__MIDL_ProcFormatString;
extern const Cinecoder_MIDL_EXPR_FORMAT_STRING Cinecoder__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const Cinecoder_MIDL_PROC_FORMAT_STRING Cinecoder__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const Cinecoder_MIDL_TYPE_FORMAT_STRING Cinecoder__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_Cinecoder_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICC_ClassFactory, ver. 0.0,
   GUID={0xe7d4b675,0x63d4,0x43f4,{0x91,0xfa,0x0a,0xf2,0x30,0x11,0x1d,0x10}} */


/* Object interface: ICC_Schema, ver. 0.0,
   GUID={0x48b6acc6,0x3d65,0x41f4,{0x80,0x05,0xcf,0x19,0x05,0x8a,0xfc,0x7e}} */


/* Object interface: ICC_ClassCreator, ver. 0.0,
   GUID={0x4735fb44,0x54bc,0x478a,{0x8f,0xfa,0x3a,0xc6,0xcb,0x32,0x0a,0x1a}} */


/* Object interface: ICC_ErrorHandler, ver. 0.0,
   GUID={0x1fb875da,0xbdf4,0x4de9,{0xb5,0x91,0xa3,0xdc,0x77,0xd3,0x70,0xc9}} */


/* Object interface: ICC_ErrorHandlerGetter, ver. 0.0,
   GUID={0xa84dee36,0x545b,0x4c77,{0xb6,0x88,0x08,0xb2,0x13,0xb1,0xc1,0x54}} */


/* Object interface: ICC_ErrorHandlerProp, ver. 0.0,
   GUID={0x2cff007c,0x31c3,0x45bf,{0x8a,0xc1,0x3b,0x16,0x9c,0x4c,0xcd,0x7b}} */


/* Object interface: ICC_ClassFactoryProvider, ver. 0.0,
   GUID={0xdea107a0,0x559e,0x4908,{0x94,0xfc,0x8e,0x17,0xb9,0xf0,0xe1,0xad}} */


/* Object interface: ICC_PluginDescr, ver. 0.0,
   GUID={0xaa304da6,0xc855,0x4fda,{0x82,0x2c,0x32,0xda,0x58,0xbc,0xba,0xf3}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_Object, ver. 0.0,
   GUID={0x42d33946,0xc343,0x43c5,{0x9c,0xa0,0x85,0xa3,0x36,0x21,0x02,0xc4}} */


/* Object interface: ICC_Settings, ver. 0.0,
   GUID={0xAA8AE4DE,0x938F,0x4eb3,{0xAD,0x44,0x36,0x34,0x64,0xD1,0x0A,0x5D}} */


/* Object interface: ICC_StreamProcessor, ver. 0.0,
   GUID={0xf43bfdf8,0x1ae4,0x4626,{0x85,0x35,0x15,0xc4,0x92,0x13,0xd2,0x08}} */


/* Object interface: ICC_ByteStreamProducer, ver. 0.0,
   GUID={0xBA54F9EB,0x498D,0x471c,{0x8C,0x01,0xA8,0x88,0x30,0xC6,0xEC,0x01}} */


/* Object interface: ICC_ByteStreamConsumer, ver. 0.0,
   GUID={0x2D8791E2,0x227D,0x4898,{0xA6,0x4B,0x52,0x5A,0xBA,0xE5,0x83,0xDA}} */


/* Object interface: ICC_Breakable, ver. 0.0,
   GUID={0x96218572,0x1941,0x41de,{0x85,0x4B,0x0F,0xD5,0xF9,0x38,0xBA,0x0E}} */


/* Object interface: ICC_Decoder, ver. 0.0,
   GUID={0x5E8AF531,0xFB3F,0x4345,{0xA6,0xE9,0x50,0xDF,0x4A,0x40,0x30,0xEB}} */


/* Object interface: ICC_Encoder, ver. 0.0,
   GUID={0xc5352932,0xd890,0x4631,{0xa4,0x1b,0x05,0x4e,0xf9,0x32,0xd5,0x8f}} */


/* Object interface: ICC_Transcoder, ver. 0.0,
   GUID={0xeb28dcba,0xd1a5,0x4a53,{0xa6,0x9d,0x9e,0x00,0x0e,0xfd,0x98,0x04}} */


/* Object interface: ICC_Splitter, ver. 0.0,
   GUID={0x0920768f,0xe355,0x40df,{0xa9,0xc9,0x2e,0x5b,0x08,0x71,0xdb,0x7f}} */


/* Object interface: ICC_Cutter, ver. 0.0,
   GUID={0x562e7dae,0x48ab,0x4805,{0xa5,0x83,0x10,0x8d,0xdb,0x87,0xaa,0x33}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_IndexWriter, ver. 0.0,
   GUID={0x52911b83,0xe54e,0x401a,{0xb9,0x52,0xa1,0x41,0x3e,0xec,0x82,0xaa}} */


/* Object interface: ICC_ByteStreamCallback, ver. 0.0,
   GUID={0x3190F038,0xCC19,0x405b,{0xB6,0x5B,0xFE,0xD9,0x81,0xE3,0x8F,0x0D}} */


/* Object interface: ICC_DataReadyCallback, ver. 0.0,
   GUID={0x55813708,0xa883,0x4bca,{0xbe,0x08,0x06,0x1a,0x54,0x6e,0x0d,0x3f}} */


/* Object interface: ICC_TimeBaseProp, ver. 0.0,
   GUID={0xBF96E276,0x449C,0x47ec,{0xBF,0xA0,0x0B,0xAC,0xB3,0x44,0x7F,0x1D}} */


/* Object interface: ICC_InitialTimeCodeProp, ver. 0.0,
   GUID={0x020CC64E,0x0BCD,0x4d5b,{0xB6,0x8A,0xE2,0x10,0x71,0x6F,0x2D,0x9E}} */


/* Object interface: ICC_BitRateProp, ver. 0.0,
   GUID={0x146273cc,0x9a1e,0x4faa,{0xb4,0x5a,0xa3,0x4a,0x6d,0xc8,0x0a,0x7a}} */


/* Object interface: ICC_FrameRateProp, ver. 0.0,
   GUID={0x003f7114,0x3a9c,0x41f3,{0xb0,0x34,0x60,0x80,0x1d,0xa8,0x5d,0x6f}} */


/* Object interface: ICC_BufferAllocator, ver. 0.0,
   GUID={0xCFB56A68,0xB3F4,0x422d,{0xB9,0x76,0x1C,0x26,0x5A,0x1D,0x30,0x64}} */


/* Object interface: ICC_StreamRecovery, ver. 0.0,
   GUID={0xDE7A69AB,0x560E,0x4777,{0xBA,0xAA,0x57,0x3F,0x9D,0xEF,0xE7,0xEC}} */


/* Object interface: ICC_ThreadsCountProp, ver. 0.0,
   GUID={0x8f73a09e,0x3419,0x42f9,{0xb6,0xe5,0x28,0x42,0x54,0x43,0xfc,0x5d}} */


/* Object interface: ICC_ThreadsAffinityProp, ver. 0.0,
   GUID={0x452854e9,0x2033,0x46a3,{0xa3,0xcd,0xa9,0x5a,0xa1,0xf4,0x66,0xc1}} */


/* Object interface: ICC_ThreadsPriorityProp, ver. 0.0,
   GUID={0x635a623f,0xf077,0x4083,{0x96,0x3d,0x6a,0xa6,0x62,0x68,0xb0,0xc8}} */


/* Object interface: ICC_InputBufferControl, ver. 0.0,
   GUID={0xd96ad003,0xb4ed,0x4154,{0xaf,0xed,0xc0,0xf7,0x78,0x05,0x14,0x15}} */


/* Object interface: ICC_ReferenceAlisProp, ver. 0.0,
   GUID={0x8CDA674D,0xA513,0x4b24,{0x8B,0x6C,0x0D,0x34,0xB2,0xE8,0xFC,0xD1}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_ProcessDataPolicyProp, ver. 0.0,
   GUID={0x9bfc95b3,0x67ff,0x4dce,{0x92,0x58,0x65,0x45,0xa5,0x1f,0xd0,0x08}} */


/* Object interface: ICC_AddUserDataCtrl, ver. 0.0,
   GUID={0x8616e94c,0x3950,0x4df7,{0x8c,0x90,0xd7,0x76,0xe8,0x64,0x50,0x61}} */


/* Object interface: ICC_ConcurrencyLevelProp, ver. 0.0,
   GUID={0x610330b7,0x3359,0x471e,{0xbd,0xc0,0x2a,0x5a,0xc7,0x2b,0xe3,0x72}} */


/* Object interface: ICC_DataWriter, ver. 0.0,
   GUID={0xc7689044,0x8834,0x41b0,{0x8d,0xfe,0xa5,0xc4,0x07,0xf8,0xa2,0x5b}} */


/* Object interface: ICC_DataWriterEx, ver. 0.0,
   GUID={0x07d72818,0x5aa6,0x4f0d,{0xbd,0xf2,0xc0,0xf8,0x15,0x90,0x15,0x37}} */


/* Object interface: ICC_DataReader, ver. 0.0,
   GUID={0x05ebcab5,0xb9d7,0x4024,{0xaa,0x3e,0xb6,0x3b,0x1d,0x5e,0x04,0x6d}} */


/* Object interface: ICC_DataReaderEx, ver. 0.0,
   GUID={0xb7f45fbd,0x8e48,0x4c72,{0x9b,0xf6,0x51,0xf4,0x75,0x3f,0xb7,0x23}} */


/* Object interface: ICC_StreamPositionProp, ver. 0.0,
   GUID={0x7082a2e8,0xe87b,0x4f0b,{0xb1,0xeb,0xc0,0x71,0xac,0xa2,0xb6,0x76}} */


/* Object interface: ICC_StreamLengthProp, ver. 0.0,
   GUID={0x56e7b348,0x2a5c,0x4d67,{0xb6,0x24,0x55,0x0d,0xc8,0x7e,0x87,0xdb}} */


/* Object interface: ICC_InputStream, ver. 0.0,
   GUID={0x1fe2f5d7,0xed48,0x4362,{0x9e,0xbd,0x2a,0xa0,0x04,0x29,0xb0,0xdd}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_File, ver. 0.0,
   GUID={0x4a4806fb,0xd622,0x4c14,{0xa1,0x9c,0x93,0x5a,0xcc,0xc9,0xb4,0x50}} */


/* Object interface: ICC_InputFile, ver. 0.0,
   GUID={0xfac59d98,0x7bd4,0x4100,{0xb8,0x07,0xec,0xcd,0x2f,0xbe,0x1c,0xbf}} */


/* Object interface: ICC_OutputFile, ver. 0.0,
   GUID={0x4682af7b,0x926a,0x4d47,{0xbe,0x2b,0x8b,0xb5,0xd5,0x55,0x33,0x1d}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_ElementaryStreamInfo, ver. 0.0,
   GUID={0x03AF145E,0x6633,0x4cbd,{0xB6,0xCF,0x28,0x64,0x73,0xE5,0x58,0x60}} */


/* Object interface: ICC_ElementaryStreamSettings, ver. 0.0,
   GUID={0x89157059,0xe318,0x4a9b,{0x88,0x21,0x1c,0xfc,0x97,0x9a,0xc1,0x19}} */


/* Object interface: ICC_ByteStreamDataInfo, ver. 0.0,
   GUID={0xad2b6c6e,0xc53d,0x4421,{0x9b,0x7b,0x3b,0x02,0x24,0x20,0x52,0x57}} */


/* Object interface: ICC_ElementaryDataInfo, ver. 0.0,
   GUID={0xD2C8A578,0x2495,0x4271,{0x8F,0x99,0x1D,0xFC,0x46,0x9E,0x7B,0x32}} */


/* Object interface: ICC_CodedStreamHeaderProp, ver. 0.0,
   GUID={0x923d7d85,0x60e1,0x479b,{0xa5,0x46,0x0f,0x8c,0x16,0x64,0xc4,0x3a}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0051, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_ExecutiveDeviceMaskProp, ver. 0.0,
   GUID={0x703087c5,0x31bc,0x4156,{0xbf,0xd8,0x78,0x04,0x8a,0xc8,0xe4,0xf4}} */


/* Object interface: ICC_CollectionHandler, ver. 0.0,
   GUID={0x2B55773E,0x6140,0x4B82,{0x88,0xAD,0xB0,0xF2,0x65,0x68,0x35,0xBA}} */


/* Object interface: ICC_ReadOnlyCollection, ver. 0.0,
   GUID={0x0579CA5C,0x09EE,0x4215,{0x88,0x0A,0x9B,0xDE,0x78,0xE8,0xD5,0xA4}} */


/* Object interface: ICC_Collection, ver. 0.0,
   GUID={0xCEEABD5A,0x2915,0x4585,{0xA5,0x58,0xA9,0xC5,0x58,0x58,0x7D,0xA4}} */


/* Object interface: ICC_CollectionChanged, ver. 0.0,
   GUID={0x1A05F3A9,0x0943,0x4D65,{0xAC,0x76,0x21,0x00,0xE4,0xEC,0x6E,0xA7}} */


/* Object interface: ICC_CollectionFilter, ver. 0.0,
   GUID={0xC61A9F1F,0x2ABF,0x4CB2,{0x9C,0x5D,0x14,0x05,0x16,0x66,0x3D,0xCE}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0057, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_AudioStreamInfo, ver. 0.0,
   GUID={0x00003301,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_AudioEncoderSettings, ver. 0.0,
   GUID={0xa12bf062,0xfd75,0x44a1,{0x9a,0xdf,0xad,0x6d,0x1a,0x35,0x3f,0x74}} */


/* Object interface: ICC_AudioFrameInfo, ver. 0.0,
   GUID={0x00003302,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_AudioProducer, ver. 0.0,
   GUID={0x00003001,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_AudioConsumer, ver. 0.0,
   GUID={0x00003002,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0062, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_AudioProducerExt, ver. 0.0,
   GUID={0xf865713b,0x9ed0,0x42de,{0xae,0x47,0x27,0xec,0x45,0x43,0xd4,0x08}} */


/* Object interface: ICC_AudioConsumerExt, ver. 0.0,
   GUID={0x6ad320eb,0x7ec1,0x487d,{0xad,0x90,0x1a,0x68,0xe7,0x0f,0xf8,0xdb}} */


/* Object interface: ICC_AudioDecoder, ver. 0.0,
   GUID={0x00003700,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_AudioEncoder, ver. 0.0,
   GUID={0x00003400,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_AudioSplitter, ver. 0.0,
   GUID={0xeab5d8d8,0xc8f0,0x4ded,{0xa2,0xd3,0x31,0xc5,0xfd,0x60,0xa0,0x5a}} */


/* Object interface: ICC_AudioFilter, ver. 0.0,
   GUID={0x403ac16e,0x9b0c,0x47e5,{0xb3,0xfa,0xd7,0xec,0x1d,0x3a,0xf0,0x93}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0068, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_MpegAudioStreamInfo, ver. 0.0,
   GUID={0x16bd8d1b,0x5245,0x4f88,{0xa4,0x3f,0x23,0x63,0xef,0x8f,0x4b,0x2b}} */


/* Object interface: ICC_MpegAudioFrameInfo, ver. 0.0,
   GUID={0xbeff73fd,0x2452,0x41e3,{0xae,0xfb,0xc7,0xf3,0x90,0x34,0x9f,0x4b}} */


/* Object interface: ICC_MpegAudioEncoderSettings, ver. 0.0,
   GUID={0x40858c51,0x86e4,0x496c,{0xa6,0xe8,0x81,0xcb,0xfe,0x2d,0xcc,0x1c}} */


/* Object interface: ICC_MpegAudioDecoder, ver. 0.0,
   GUID={0x7b9c9deb,0xd2c4,0x4239,{0xbd,0x19,0x37,0x21,0x4a,0xe2,0x7b,0x58}} */


/* Object interface: ICC_MpegAudioEncoder, ver. 0.0,
   GUID={0xa8810f12,0xbaf4,0x449f,{0xa5,0xd7,0x05,0x2e,0x24,0xad,0xb3,0x56}} */


/* Object interface: ICC_MpegAudioSplitter, ver. 0.0,
   GUID={0x3ea678d6,0xfbfa,0x4aeb,{0x84,0xb5,0xff,0xca,0x91,0xb7,0xaa,0x84}} */


/* Object interface: ICC_Aes3AudioStreamInfo, ver. 0.0,
   GUID={0x6a7d55ae,0x19f4,0x46e8,{0x87,0xc9,0x27,0xd9,0x57,0x12,0xe9,0x66}} */


/* Object interface: ICC_Aes3AudioEncoderSettings, ver. 0.0,
   GUID={0x0aac0e66,0x5eb9,0x4f8e,{0x98,0x88,0x8d,0xc5,0x11,0xff,0xa6,0x69}} */


/* Object interface: ICC_Aes3AudioFrameInfo, ver. 0.0,
   GUID={0x30f5700b,0xdd51,0x4266,{0xb9,0x9e,0x0a,0x62,0x83,0xad,0xf4,0x85}} */


/* Object interface: ICC_Aes3AudioDecoder, ver. 0.0,
   GUID={0x9d054d64,0xc980,0x4108,{0x91,0x8c,0x34,0x96,0x37,0x33,0x14,0xfc}} */


/* Object interface: ICC_Aes3AudioEncoder, ver. 0.0,
   GUID={0x17a5ca65,0xd735,0x4e22,{0xa2,0xf9,0x29,0x71,0xce,0xe7,0xe8,0x1e}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0079, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_AAC_AudioStreamInfo, ver. 0.0,
   GUID={0x8d85d96b,0x1359,0x4173,{0x99,0xf1,0xd9,0x40,0x42,0x04,0x26,0xcc}} */


/* Object interface: ICC_AAC_AudioFrameInfo, ver. 0.0,
   GUID={0xa212acd4,0xc2d2,0x45ed,{0x85,0x6f,0x0c,0xae,0x23,0xf1,0x43,0x52}} */


/* Object interface: ICC_AAC_AudioStreamSettings, ver. 0.0,
   GUID={0xc48df702,0x21a4,0x454d,{0xbc,0xb6,0x28,0xcb,0x0e,0x1c,0x36,0x9f}} */


/* Object interface: ICC_AAC_AudioEncoderSettings, ver. 0.0,
   GUID={0x393e9fcf,0xeed3,0x4e74,{0x86,0xd1,0x2c,0xe0,0x34,0xbc,0x68,0x0c}} */


/* Object interface: ICC_AAC_AudioDecoder, ver. 0.0,
   GUID={0x461528f1,0xd3d3,0x4349,{0xb7,0x28,0xc5,0xa2,0x7e,0xd9,0xaf,0xdc}} */


/* Object interface: ICC_AAC_AudioEncoder, ver. 0.0,
   GUID={0xb0fb4156,0xbb6a,0x4000,{0xb3,0xc5,0xc7,0x5c,0x93,0xf6,0x07,0xa7}} */


/* Object interface: ICC_AAC_AudioSplitter, ver. 0.0,
   GUID={0x0d395265,0xfdf2,0x4c5d,{0xb6,0x3e,0xc1,0x4e,0x59,0x7f,0x5e,0x74}} */


/* Object interface: ICC_LATM_AAC_AudioDecoder, ver. 0.0,
   GUID={0x94f6f31b,0xcb5d,0x4813,{0x9c,0x1e,0x3e,0x04,0x74,0x78,0xd0,0x63}} */


/* Object interface: ICC_LPCM_AudioStreamInfo, ver. 0.0,
   GUID={0xfd104508,0x54d6,0x47cb,{0x8f,0x2b,0x5d,0x4a,0xc2,0x08,0x74,0xab}} */


/* Object interface: ICC_LPCM_AudioEncoderSettings, ver. 0.0,
   GUID={0x6da5badf,0x910b,0x4c6a,{0xae,0x8c,0xe1,0x85,0xe8,0x8f,0xbd,0x01}} */


/* Object interface: ICC_LPCM_AudioDecoder, ver. 0.0,
   GUID={0x45c1f3b6,0x4f4b,0x4007,{0xa0,0x55,0x19,0xfd,0x19,0x60,0x34,0x7f}} */


/* Object interface: ICC_LPCM_AudioEncoder, ver. 0.0,
   GUID={0x7f60463f,0xbb23,0x4334,{0x8e,0x95,0xc2,0xa3,0x8f,0x74,0x92,0xea}} */


/* Object interface: ICC_BluRay_PCM_AudioDecoder, ver. 0.0,
   GUID={0x69c5f8f2,0xa863,0x47d4,{0xaa,0xec,0xfb,0x63,0xca,0x98,0x77,0x75}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0092, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_AC3_AudioStreamInfo, ver. 0.0,
   GUID={0xd766dec9,0x3649,0x4958,{0x96,0xd4,0x50,0x88,0x62,0x42,0x0f,0xa7}} */


/* Object interface: ICC_AC3_AudioFrameInfo, ver. 0.0,
   GUID={0x9b8e0766,0x3118,0x46f4,{0x81,0x5b,0x7d,0x2a,0xf4,0xec,0xed,0xb2}} */


/* Object interface: ICC_AC3_AudioEncoderSettings, ver. 0.0,
   GUID={0xb1e0805e,0x11b6,0x4f3e,{0x81,0x29,0x24,0xde,0x36,0x83,0x34,0xa3}} */


/* Object interface: ICC_AC3_AudioEncoder, ver. 0.0,
   GUID={0xb5779e7c,0x0d45,0x40e6,{0x8f,0xb6,0xcc,0xba,0x6f,0x19,0xe9,0x84}} */


/* Object interface: ICC_AC3_AudioDecoder, ver. 0.0,
   GUID={0x7dd6b14b,0x3eaf,0x4bb5,{0xb4,0xe7,0x71,0x44,0xa0,0x78,0xe5,0xc3}} */


/* Object interface: ICC_AC3_AudioSplitter, ver. 0.0,
   GUID={0xc0d3bba8,0xad71,0x48c1,{0x91,0x1e,0xbb,0x35,0xdd,0xc2,0xe3,0xf3}} */


/* Object interface: ICC_WavAudioStreamInfo, ver. 0.0,
   GUID={0xfe1c44c6,0xf691,0x4ee9,{0xb6,0x40,0x70,0xf4,0x8d,0xef,0xb6,0x00}} */


/* Object interface: ICC_WavAudioEncoderSettings, ver. 0.0,
   GUID={0x7fbfb34a,0x7005,0x479d,{0x96,0xb5,0x25,0xa9,0x01,0x49,0x6c,0x26}} */


/* Object interface: ICC_WavAudioEncoder, ver. 0.0,
   GUID={0x92366695,0x3047,0x4744,{0xaa,0x87,0x8d,0x93,0x9c,0x6e,0x8a,0x69}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0101, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_VideoStreamInfo, ver. 0.0,
   GUID={0x00002201,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoStreamInfoExt, ver. 0.0,
   GUID={0x344748d5,0xe5b1,0x48cf,{0x8a,0xc0,0x0b,0x18,0x35,0x87,0x23,0xda}} */


/* Object interface: ICC_VideoFrameInfo, ver. 0.0,
   GUID={0x00002203,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoFrameSecondFieldProp, ver. 0.0,
   GUID={0x204d5e69,0x3539,0x4bc7,{0x83,0x64,0x89,0x72,0x51,0xf2,0x73,0x9a}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0105, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_VideoFrameUserDataProp, ver. 0.0,
   GUID={0x37ad7e37,0x5275,0x44ea,{0x88,0xa3,0x71,0x97,0x8c,0x71,0x2b,0x40}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0106, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_VideoFrameQualityInfo, ver. 0.0,
   GUID={0x00002205,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_PsnrCalculationProp, ver. 0.0,
   GUID={0xa011f6c3,0x59ad,0x4ad9,{0xaf,0xe0,0x4a,0xba,0xde,0x61,0x97,0x1e}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0108, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_VideoProducer, ver. 0.0,
   GUID={0x00002002,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoConsumer, ver. 0.0,
   GUID={0x00002003,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoConsumerExt, ver. 0.0,
   GUID={0x00002004,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoProducerExt, ver. 0.0,
   GUID={0x71ac7c0a,0x7ca3,0x4774,{0x94,0x5b,0x2b,0x17,0xe9,0x55,0xea,0x01}} */


/* Object interface: ICC_VideoDecoder, ver. 0.0,
   GUID={0x00002005,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoEncoder, ver. 0.0,
   GUID={0x00002006,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_VideoSplitter, ver. 0.0,
   GUID={0x61149ac1,0xd826,0x46be,{0x82,0xa9,0xc7,0xa8,0xfd,0xf1,0x9b,0x15}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0115, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_VDecFrameOutputOrderProp, ver. 0.0,
   GUID={0xdc5e98b4,0x0c61,0x4d00,{0x9e,0xe0,0x24,0x53,0xf7,0xe5,0x3e,0xde}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0116, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_MpegVideoStreamInfo, ver. 0.0,
   GUID={0x00002202,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MpegVideoFrameInfo, ver. 0.0,
   GUID={0x00002204,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MpegVideoDecoder, ver. 0.0,
   GUID={0x00002700,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MpegVideoEncoder, ver. 0.0,
   GUID={0x00002400,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MpegVideoEncoderSettings, ver. 0.0,
   GUID={0x00002401,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MpegVideoSplitter, ver. 0.0,
   GUID={0x17adf111,0x3450,0x4cf6,{0x93,0x71,0xe0,0x2e,0xed,0x72,0x0c,0xd4}} */


/* Object interface: ICC_D10VideoEncoderSettings, ver. 0.0,
   GUID={0xd6baaecc,0x900a,0x4fce,{0xbb,0x7a,0x5f,0xeb,0x66,0x5b,0xe2,0x75}} */


/* Object interface: ICC_D10VideoEncoder, ver. 0.0,
   GUID={0xaa7effd7,0x7830,0x4400,{0xb5,0x1e,0xac,0x7b,0x35,0x10,0xf9,0xc1}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0124, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_H264VideoStreamInfo, ver. 0.0,
   GUID={0x63cf41b3,0xb6ac,0x448f,{0xac,0x25,0x5b,0x21,0x60,0x82,0x5d,0x9c}} */


/* Object interface: ICC_H264VideoEncoderSettings, ver. 0.0,
   GUID={0x7baac45c,0x1da0,0x4fa6,{0xb6,0x45,0xf9,0xaf,0xdd,0x84,0x24,0x6f}} */


/* Object interface: ICC_H264VideoFrameInfo, ver. 0.0,
   GUID={0xecfd3260,0x3a6b,0x474a,{0x94,0xe5,0x7d,0x35,0xc7,0x48,0x2c,0x8b}} */


/* Object interface: ICC_H264VideoEncoder, ver. 0.0,
   GUID={0x60DAA884,0x1861,0x4771,{0xBF,0x4D,0x4A,0x82,0x57,0x0D,0xDC,0x8E}} */


/* Object interface: ICC_H264VideoDecoder, ver. 0.0,
   GUID={0xf7b72085,0xb7b8,0x42a2,{0xa6,0xec,0xe8,0x18,0x14,0xe8,0x4f,0x32}} */


/* Object interface: ICC_AVC1VideoDecoder, ver. 0.0,
   GUID={0x0976d3ec,0x341a,0x4805,{0x95,0x4a,0x3a,0x8c,0xb0,0xd1,0xd3,0x3a}} */


/* Object interface: ICC_H264VideoSplitter, ver. 0.0,
   GUID={0xec6d9953,0x2ea1,0x422e,{0xbf,0x66,0x9d,0xb8,0xb2,0x4f,0x0f,0xc8}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0131, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_HEVCVideoStreamInfo, ver. 0.0,
   GUID={0x59d8bbc4,0x4f9e,0x4e91,{0xa1,0x13,0x5d,0x4d,0x01,0x26,0x25,0x79}} */


/* Object interface: ICC_HEVCVideoFrameInfo, ver. 0.0,
   GUID={0xed49d3da,0x7b4d,0x4f43,{0xad,0xfe,0x96,0x1a,0xac,0x27,0x49,0x2c}} */


/* Object interface: ICC_HEVCVideoDecoder, ver. 0.0,
   GUID={0xb0584a0a,0xa32c,0x4040,{0xa7,0x96,0xa6,0x24,0xf2,0xdc,0xa3,0x7f}} */


/* Object interface: ICC_HEVCVideoSplitter, ver. 0.0,
   GUID={0x693b38d6,0xa8cf,0x4d96,{0x90,0x99,0xa1,0x2f,0xad,0xa9,0xb7,0x69}} */


/* Object interface: ICC_HEVCVideoEncoder, ver. 0.0,
   GUID={0x78058b0d,0xb691,0x4ea1,{0xb3,0x6e,0x59,0x9b,0x80,0x4f,0xda,0x66}} */


/* Object interface: ICC_HEVCVideoEncoderSettings, ver. 0.0,
   GUID={0xe9d5616d,0xb262,0x44d5,{0x88,0x69,0x96,0xae,0xc9,0xf7,0x8a,0xa9}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0137, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_AVCIntraEncoderSettings, ver. 0.0,
   GUID={0x54761d8c,0x4180,0x46c7,{0x83,0x64,0x14,0x4a,0x64,0xed,0x1e,0x8e}} */


/* Object interface: ICC_AVCIntraEncoder, ver. 0.0,
   GUID={0x0242b581,0x180a,0x430e,{0xbb,0x9c,0x1a,0x78,0xe6,0x0d,0xe3,0xe5}} */


/* Object interface: ICC_AVCIntraDecoder, ver. 0.0,
   GUID={0x6c54b9dd,0x6608,0x4b3c,{0x83,0x25,0x3d,0x45,0xa6,0x12,0xcb,0xb9}} */


/* Object interface: ICC_AVCIntraDecoder2, ver. 0.0,
   GUID={0x1a5e58f3,0x876d,0x4efa,{0xaa,0x2b,0x8d,0x68,0xd5,0xf9,0xda,0x4e}} */


/* Object interface: ICC_Mpeg4VideoStreamInfo, ver. 0.0,
   GUID={0x63ebe1fe,0x888a,0x468e,{0x9e,0x07,0xc7,0xc6,0x1d,0xa1,0xe3,0x9b}} */


/* Object interface: ICC_Mpeg4VideoFrameInfo, ver. 0.0,
   GUID={0xdf8c0ede,0xb2ea,0x41d4,{0xa4,0x47,0x83,0x36,0x4a,0x37,0x7e,0x47}} */


/* Object interface: ICC_Mpeg4VideoDecoder, ver. 0.0,
   GUID={0x31c651b2,0xbfa1,0x41e8,{0xb7,0xe6,0xfe,0x1f,0x99,0xd2,0x80,0xcd}} */


/* Object interface: ICC_J2K_VideoStreamInfo, ver. 0.0,
   GUID={0xabfb14e8,0x4aa5,0x40b3,{0x8f,0xc7,0xc8,0xdc,0x22,0x7a,0x62,0xc9}} */


/* Object interface: ICC_J2K_VideoFrameInfo, ver. 0.0,
   GUID={0x23c787fa,0x1d2d,0x436c,{0x95,0xdc,0x26,0x4f,0x18,0x06,0xe5,0x57}} */


/* Object interface: ICC_J2K_VideoSplitter, ver. 0.0,
   GUID={0xf341b209,0xd017,0x40a7,{0xb9,0xa1,0x26,0x82,0xd0,0x8a,0xe1,0x23}} */


/* Object interface: ICC_J2K_VideoDecoder, ver. 0.0,
   GUID={0x1c4dfcfd,0x6afc,0x471d,{0xbd,0x09,0x65,0xb2,0xa4,0xbd,0x9a,0x13}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0148, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_SonyRaw_VideoStreamInfo, ver. 0.0,
   GUID={0xae5cdb5b,0xd9f0,0x4053,{0x8c,0x03,0x44,0xa5,0xa3,0x05,0xef,0x03}} */


/* Object interface: ICC_SonyRaw_VideoFrameInfo, ver. 0.0,
   GUID={0x5a17fce5,0xa435,0x4e0d,{0x90,0x83,0x10,0x70,0x96,0x0b,0xde,0x1b}} */


/* Object interface: ICC_SonyRaw_VideoDecoder, ver. 0.0,
   GUID={0xf7a23e0b,0x1d09,0x458d,{0xba,0x4f,0x62,0x33,0x56,0xad,0x93,0x61}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0151, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_MultiplexedDataDescr, ver. 0.0,
   GUID={0x022813a8,0x3467,0x4f49,{0xb1,0x7a,0x57,0xbf,0xfd,0x5f,0xd2,0x1f}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0152, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_SystemDescriptorsReader, ver. 0.0,
   GUID={0x00001ffe,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_SystemDescriptorsManager, ver. 0.0,
   GUID={0x00001fff,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_PES_Info, ver. 0.0,
   GUID={0x00001801,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_ProgramInfo, ver. 0.0,
   GUID={0x00001802,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_MultiplexedStreamInfo, ver. 0.0,
   GUID={0x00001803,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_BaseMultiplexerSettings, ver. 0.0,
   GUID={0x00001A01,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_BaseMultiplexerPinSettings, ver. 0.0,
   GUID={0x00001A02,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_SystemMuxerPinSettings, ver. 0.0,
   GUID={0x00001B11,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_SystemMuxerSettings, ver. 0.0,
   GUID={0x00001B01,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_ProgramMuxerPinSettings, ver. 0.0,
   GUID={0x00001B12,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_ProgramMultiplexerSettings, ver. 0.0,
   GUID={0x00001B02,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_TransportMuxerPinSettings, ver. 0.0,
   GUID={0x00001C21,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_TransportMultiplexerSettings, ver. 0.0,
   GUID={0x00001C01,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_TS_ProgramDescr, ver. 0.0,
   GUID={0x00001C11,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_M2TSMP_MultiplexerSettings, ver. 0.0,
   GUID={0x00001C02,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_HDV1MuxerSettings, ver. 0.0,
   GUID={0x00001D01,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_HDV2MuxerSettings, ver. 0.0,
   GUID={0x00001D02,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_Multiplexer, ver. 0.0,
   GUID={0x6EEBE83C,0x8F8B,0x4321,{0x8C,0x1E,0xD9,0x50,0xC7,0xE0,0xA2,0x82}} */


/* Object interface: ICC_DemultiplexedDataCallback, ver. 0.0,
   GUID={0x00001101,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_DemultiplexedDataCallbackExt, ver. 0.0,
   GUID={0xa3a2d00f,0x72e6,0x4611,{0xb4,0xf6,0xde,0x49,0x41,0x39,0x3a,0xcf}} */


/* Object interface: ICC_StreamClockReferenceProp, ver. 0.0,
   GUID={0x1c420773,0xd168,0x404a,{0x85,0xf2,0x07,0xb2,0xb6,0xec,0x54,0x55}} */


/* Object interface: ICC_ProgramClockReferencePidProp, ver. 0.0,
   GUID={0x43a07dea,0x9101,0x4b35,{0xb6,0xc2,0xc9,0xdd,0xa5,0x51,0xb0,0x8b}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0174, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_Demultiplexer, ver. 0.0,
   GUID={0x00001102,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_HDV2_Multiplexer, ver. 0.0,
   GUID={0x00001D12,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_StreamRecognizer, ver. 0.0,
   GUID={0x00007777,0xbe08,0x11dc,{0xaa,0x88,0x00,0x50,0x56,0xc0,0x00,0x08}} */


/* Object interface: ICC_DebugDumpIncomingDataToFile, ver. 0.0,
   GUID={0x3aaf6ee8,0x11db,0x4801,{0x92,0x29,0x99,0x93,0xd7,0x43,0xa0,0xea}} */


/* Object interface: ICC_PCR_Callback, ver. 0.0,
   GUID={0x0fdcdb5a,0x5eee,0x4152,{0x9a,0x14,0xd9,0xda,0xaa,0x75,0x5b,0xe8}} */


/* Object interface: ICC_PCR_CallbackProp, ver. 0.0,
   GUID={0xc83bc0f4,0xdffb,0x4061,{0xb6,0x0e,0x60,0x89,0x5f,0x1d,0x4f,0x7d}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0180, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_MP4_Multiplexer, ver. 0.0,
   GUID={0x4a4fc69f,0x4a41,0x4785,{0x97,0xd6,0x8f,0xa3,0x75,0x07,0x76,0x9c}} */


/* Object interface: ICC_MP4_MultiplexerSettings, ver. 0.0,
   GUID={0x29d573e4,0xe709,0x41e8,{0xa7,0x3c,0x70,0x87,0x6f,0x01,0xa5,0x78}} */


/* Object interface: ICC_MP4_MuxerPinSettings, ver. 0.0,
   GUID={0xbc0a4c83,0xd677,0x4a69,{0x85,0x14,0x5b,0xe2,0x34,0xb1,0x4b,0xda}} */


/* Object interface: ICC_ReferenceDataConsumer, ver. 0.0,
   GUID={0x64e71555,0xddd3,0x4106,{0xa8,0x65,0x6b,0x0e,0x6e,0x9e,0x63,0xcf}} */


/* Object interface: ICC_MP4_FragmentedPin, ver. 0.0,
   GUID={0xb26b77e5,0xa8a2,0x41d6,{0xa9,0x3f,0x18,0xac,0x48,0x91,0xb9,0x23}} */


/* Object interface: ICC_MP4_InitialTimeCodeProp, ver. 0.0,
   GUID={0xA3BA7AF7,0xE739,0x43d5,{0x8D,0x90,0x8E,0xF2,0x56,0xCE,0xD5,0xB7}} */


/* Object interface: ICC_MP4_MpegDashSettings, ver. 0.0,
   GUID={0x53919957,0xD8DA,0x41BC,{0xB7,0x67,0x40,0x34,0x4E,0xDD,0xD5,0x57}} */


/* Object interface: ICC_MP4ChunkInfo, ver. 0.0,
   GUID={0x875370A3,0x312E,0x4D45,{0xBD,0x6F,0x4E,0xAF,0x62,0xC0,0x94,0x4A}} */


/* Object interface: ICC_MP4Fragment, ver. 0.0,
   GUID={0x39D64FEB,0x4AFC,0x43B7,{0xA3,0x19,0x67,0x74,0x01,0x04,0xCE,0x44}} */


/* Object interface: ICC_MP4InitFragment, ver. 0.0,
   GUID={0x80BDD2C9,0x678A,0x407A,{0xBA,0x3C,0x50,0x3C,0x45,0x2E,0xB4,0x33}} */


/* Object interface: ICC_MP4RandomAccessFragment, ver. 0.0,
   GUID={0xA8795B72,0xCA30,0x4FF5,{0x98,0x99,0x3F,0x7D,0xBF,0xAD,0x4A,0xA9}} */


/* Object interface: ICC_MP4Producer, ver. 0.0,
   GUID={0xACCD0235,0xEE69,0x4E40,{0xB8,0xAA,0xE4,0xD1,0xD4,0x4E,0x6D,0xD6}} */


/* Object interface: ICC_HLS_MultiplexerSettings, ver. 0.0,
   GUID={0xf6397d60,0xf204,0x4acc,{0x83,0x39,0xd9,0x4d,0xba,0x6f,0xa4,0xdd}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0193, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICC_MediaReader, ver. 0.0,
   GUID={0x91aa62eb,0xeb08,0x48ee,{0x9b,0xd0,0x5e,0x6c,0x68,0x6e,0x77,0x73}} */


/* Object interface: ICC_MediaReader2, ver. 0.0,
   GUID={0xdbd2ea98,0x407b,0x4a3a,{0xa8,0x5a,0x3d,0x7e,0x42,0x96,0x42,0x70}} */


/* Standard interface: __MIDL_itf_Cinecoder_0000_0195, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Cinecoder__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Cinecoder_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _Cinecoder_StubVtblList[] = 
{
    0
};

PCInterfaceName const _Cinecoder_InterfaceNamesList[] = 
{
    0
};


#define _Cinecoder_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Cinecoder, pIID, n)

int __stdcall _Cinecoder_IID_Lookup( const IID * pIID, int * pIndex )
{
    return 0;
}

const ExtendedProxyFileInfo Cinecoder_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Cinecoder_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Cinecoder_StubVtblList,
    (const PCInterfaceName * ) & _Cinecoder_InterfaceNamesList,
    0, /* no delegation */
    & _Cinecoder_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

