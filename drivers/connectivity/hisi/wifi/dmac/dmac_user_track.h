

#ifndef __DMAC_USER_TRACK_H__
#define __DMAC_USER_TRACK_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef _PRE_DEBUG_MODE_USER_TRACK

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "mac_user.h"
#include "mac_vap.h"
#include "oam_ext_if.h"
#include "dmac_main.h"




#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_USER_TRACK_H
/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define  DMAC_USER_TRACK_REPORT_PARAM_PERIOD        2000   /* 上报周期，2s */

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
extern oal_uint32  dmac_user_track_report_usr_thrput_stat(mac_user_stru  *pst_mac_user);
extern oal_uint32  dmac_user_track_clear_usr_thrput_stat(mac_user_stru  *pst_mac_user);

#endif






#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of dmac_user_track.h */
