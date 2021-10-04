#pragma once
#ifdef _MSVC_VER
#define H5ZFP_API H5ZFP_API
#else
#define H5ZFP_API __attribute__((visibility("default")))
#endif
