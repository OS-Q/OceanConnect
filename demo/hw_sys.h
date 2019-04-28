/**
 * @file hw_sys.h
 * Indicates HW System Interface Functions
 */
#ifndef _HW_SYS_H_
#define _HW_SYS_H_

#include "hw_errcode.h"
#include "hw_broadcast.h"
#include "hw_type.h"
#include "hw_log.h"

#ifdef __cplusplus
extern "C" {
#endif

HW_API_FUNC HW_INT HW_SysInit(HW_CHAR *pcWorkPath, HW_CHAR *pcLogFileName, HW_CHAR *pcVersion);
HW_API_FUNC HW_VOID HW_SysDestroy();
HW_API_FUNC HW_VOID HW_Sleep(HW_UINT uiSeconds);
HW_API_FUNC HW_UINT HW_SetAlgType(HW_UINT uiAlgType);

#ifdef __cplusplus
}
#endif

#endif
