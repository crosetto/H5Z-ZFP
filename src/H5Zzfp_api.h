#pragma once
#ifdef _MSVC_VER
#define H5ZFP_API __declspec( dllexport )
#else
#define H5ZFP_API __attribute__((visibility("default")))
#endif
