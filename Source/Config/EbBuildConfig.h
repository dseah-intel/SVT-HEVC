/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/

#ifndef EbBuildConfig_h
#define EbBuildConfig_h

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define EB_BUILD_CONFIG_CHKN_OMX        1
#define EB_BUILD_CONFIG_DEADLOCK_DEBUG  0
#define EB_BUILD_CONFIG_CHKN_EOS        1
#define EB_BUILD_CONFIG_ONE_MEMCPY      1

// Display Total Memory at the end of the memory allocations
#define EB_BUILD_CONFIG_DISPLAY_MEMORY  0

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // EbBuildConfig_h
