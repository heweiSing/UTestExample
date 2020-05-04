/**    @file      IoHwAb_Channel.h
*      Generated on 23 Mar 2020
*
*      @version :  1.0
*      GeneratorVersion:  
*
*      @copyright Liteon Auto
*      
*      Kaohsiung
*      Taiwan
*      Phone: +886 (0)7 361 1111
*
*      The copyright of the computer program(s) herein is the property of
*      Liteon. The programs(s) may be used and/or copied only with the
*      written permission of LiteonAuto or in accordance with the terms and
*      conditions stipulated in the agreement/contract under which the
*      program(s) have been supplied.
*
******************************************************************************/

/** \page   IoHwAb_Channel IoHwAb_Channel
*  The IoHwAb_Channel.h header file should be included in an application as follows:
*  @code
#include IoHwAb_Channel.h
@endcode
*
*
*  # Operation #
*
*  Brief description of the operation
*
*  ## Initialization #
*
*  Brief description of the API/operation
*
*  @code
*  IoHwAb_Channel_Init();
*  @endcode
*
*  ## Main Operation #
*
*  Brief description of the API/operation
*
*  @code
*  IoHwAb_Channel_MainFunction();
*  @endcode
*
*  ## Desgin and Interface #
*  \image html IoHwAb_Channel.png
*/
#ifndef _IOHWAB_CHANNEL_H
#define _IOHWAB_CHANNEL_H  1

/*****************************************************************************/
/* Included standard header files                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Included other header files                                               */
/*****************************************************************************/
#include "LS_Portable.h"


#ifdef __cplusplus
extern "C"{
#endif
/**
* @defgroup IoHwAb_Channel IoHwAb_Channel
*
* @{
*/
//Todo: remove HW dependency first
#if 0
#include "Io_map.h"
#else
#define    LSDR_LSDR0	1
#define    LSDR_LSDR1	2
#define   PTS_PTS2		3
#define   PTT_PTT0
#define   PTT_PTT1
#define    PTP_PTP2
#define   PTIL_PTIL2
#define   PTIL_PTIL0
#define   PTIL_PTIL1
#define   PT1AD_PT1AD4
#define   PT1AD_PT1AD5
#define    HSDR_HSDR0
#define    HSDR_HSDR1
#define   PTIL_PTIL3

#endif

#define DioConf_DioChannel_LS0   LSDR_LSDR0
#define DioConf_DioChannel_LS1   LSDR_LSDR1
#define DioConf_DioChannel_MFB  PTS_PTS2
#define AdcConf_AdcChannel_Vbat   0x4A
#define DioConf_DioChannel_HALL1  PTT_PTT0
#define DioConf_DioChannel_HALL2  PTT_PTT1
#define DioConf_DioChannel_HALLPower   PTP_PTP2

#if 1/* chb021 */
#define DioConf_DioChannel_UP_IN  PTIL_PTIL2
#define DioConf_DioChannel_OPEN_IN  PTIL_PTIL0
#define DioConf_DioChannel_CLOSE_IN  PTIL_PTIL1
#endif

#if 0/* 118/322mc */
#define DioConf_DioChannel_UP_IN  PTIL_PTIL0
#define DioConf_DioChannel_OPEN_IN  PTIL_PTIL1
#define DioConf_DioChannel_CLOSE_IN  PTIL_PTIL2
#endif

#define DioConf_DioChannel_SW1_IN  PT1AD_PT1AD4
#define DioConf_DioChannel_SW2_IN  PT1AD_PT1AD5
#define DioConf_DioChannel_SW_PW1   HSDR_HSDR0
#define DioConf_DioChannel_SW_PW2   HSDR_HSDR1
#define DioConf_DioChannel_IGN_IN  PTIL_PTIL3

//Todo: remove HW dependency first

#define	HRD_TmClrWatchDog()			{CPMUARMCOP = 0x55; CPMUARMCOP = 0xAA;}

/** @} */
#ifdef __cplusplus
}
#endif
#endif /* _IOHWAB_CHANNEL_H */

