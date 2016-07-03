

#ifndef __TAFMTASECURE_H__
#define __TAFMTASECURE_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "AtMtaInterface.h"
#include "TafMtaCtx.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define MTA_IMEI_LEN                    (15)

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

extern VOS_VOID TAF_MTA_RcvAtApSecSetReq( VOS_VOID *pMsg );

extern VOS_VOID TAF_MTA_RcvAtSimlockUnlockSetReq( VOS_VOID *pMsg );

/**********************************************************
 函 数 名  : TAF_MTA_RcvQryImeiVerifyReq
 功能描述  : IMEI 校验
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32

*************************************************************/
VOS_VOID TAF_MTA_RcvQryImeiVerifyReq(VOS_VOID *pMsg);
/**********************************************************
 函 数 名  : TAF_MTA_RcvQryCgsnReq
 功能描述  : IMEI 校验
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32

*************************************************************/
VOS_VOID TAF_MTA_RcvQryCgsnReq(VOS_VOID *pMsg);


VOS_VOID TAF_MTA_RcvAtNvwrSecCtrlSetReq( VOS_VOID *pMsg );

#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)
VOS_VOID TAF_MTA_RcvMeidSetReq(
    VOS_VOID                           *pMsg
);

VOS_VOID TAF_MTA_RcvMeidQryReq(
    VOS_VOID                           *pMsg
);

VOS_VOID TAF_MTA_SndReadUsimmFileReq(
    USIMM_CARDAPP_ENUM_UINT32           enCardApp,
    VOS_UINT16                          enFileId
);

VOS_VOID TAF_MTA_RcvRcvUsimGetFileRsp(
    VOS_VOID                           *pMsg
);

VOS_VOID  TAF_MTA_RcvUsimmReadUimidFileCnf(
    USIMM_READFILE_CNF_STRU            *pstUsimmReadCnfMsg,
    VOS_UINT8                          *paucEFRUIMID
);

VOS_VOID TAF_MTA_RcvTiWaitUIMIDReadExpired(
    VOS_VOID                           *pMsg
);
#endif



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafMtaSecure.h */

