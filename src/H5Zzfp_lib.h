#ifndef H5Z_ZFP_LIB_H
#define H5Z_ZFP_LIB_H

#include "H5Zzfp_plugin.h"
#include "H5Zzfp_api.h"

#ifdef __cplusplus
extern "C" {
#endif

extern int H5ZFP_API H5Z_zfp_initialize(void);
extern int H5ZFP_API H5Z_zfp_finalize(void);

extern void H5ZFP_API H5Z_zfp_enable_openmp(bool);

#ifdef __cplusplus
}
#endif

#endif
