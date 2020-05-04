/**    @file
*      Generated on 3 Mar 2020
*      File name:   Motor.h
*
*      Version :  1.0
*      GeneratorVersion:  
*
*      Copyright Liteon Auto
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

#ifndef _MOTOR_H
#define _MOTOR_H  1

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
/* @brief: Define the Channel type */
typedef LS_U08 MOTOR_ChannelType;
/* @brief: Define the Set/Get type */
typedef enum 
{
    MotorSetOpen= 0 ,
    MotorSetClose= 1 ,
    MotorSetStop= 2 ,
    MotorSetClrSleep= 3 ,
} MOTOR_SetType;
/* @brief: Define the Get type */
typedef enum 
{
    MotorGetRunningState= 0 ,
    MotorGetOverRunState= 1 ,
    MotorGetRelayFaultState= 2 ,
    MotorGetSleepState= 3 ,
    MotorGetStopDebEnd= 4 ,
    MotorGetStopDebCnt= 5 ,
} MOTOR_GetType;
/* @brief: Define the genereate function prototype */

/***************************************************************************/
/* @Function name:void MOTOR_Init                                           */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_Init(void);


/***************************************************************************/
/* @Function name:void MOTOR_MainFunction                                   */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_MainFunction(void);


/***************************************************************************/
/* @Function name:void MOTOR_Set                                            */
/* @Description  :                                                          */
/* @Parameters   :MOTOR_ChannelType channel,MOTOR_SetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_Set(MOTOR_ChannelType channel,MOTOR_SetType cmd);


/***************************************************************************/
/* @Function name:LS_U16 MOTOR_Get                                          */
/* @Description  :                                                          */
/* @Parameters   :MOTOR_ChannelType channel,MOTOR_GetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
LS_U16 MOTOR_Get(MOTOR_ChannelType channel,MOTOR_GetType cmd);

#ifdef __cplusplus
}
#endif
#endif /* _MOTOR_H */

