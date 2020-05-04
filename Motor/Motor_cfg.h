/**    @file
*      Generated on 3 Mar 2020
*      File name:   Motor_cfg.h
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

#ifndef _MOTOR_CFG_H
#define _MOTOR_CFG_H  1

/*****************************************************************************/
/* Included standard header files                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Included other header files                                               */
/*****************************************************************************/
#include "LS_Portable.h"

#define MOTOR_MAX_CHANNELS  1u

#ifdef __cplusplus
extern "C"{
#endif


/* Motor Defines */
#define		MOTOR_OVERRUN_TM		250u		//25sec, timebase is 100ms	
#define		MOTOR_SLEEP_TM			10u		// 1sec, timebase is 100ms
#define		MOTOR_STOP_TM			20u		//100ms, timebase is 5ms

/* Malfunction Defines */
#define		MAL_TRY_TIMES			5u

#define		MAL_STICK_TM			20u		//100ms, timebase is 5ms
#define		MAL_RELAYON_TM			200u		//1sec , timebase is 5ms
#define		MAL_RELAYOFF_TM			40u		//200ms, timebase is 5ms


/*******************************************************************************/
/* Private Typedef Enumeration												   */
/*******************************************************************************/
typedef enum
{
	malIdle		,
	malRelayOn	,
	malRelayOff	,
	malFailure	
} MOTOR_MalStateType;



/*****************************************************************************/
/* Define Parameters                                                         */
/*****************************************************************************/
typedef struct {
    LS_U08 p1;
} MOTOR_ParameterType;
/*****************************************************************************/
/* Define Attributes                                                         */
/*****************************************************************************/
typedef struct {
	LS_U08	RunFlag		;	
	LS_U16	RunTm		;
	LS_U08	SleepTm		;	
	LS_U08	StopTm		;	
} MOTOR_AttributeType;

/* Malfunction Data Structure */
typedef struct
{	
    LS_U08 	DelayTm		;
    LS_U08 	StickTm		;
    LS_U08 	TryCount	;	
    MOTOR_MalStateType State	;
} MOTOR_MalDataType;

/*****************************************************************************/
/* Define Attribute wrap                                                     */
/*****************************************************************************/
typedef struct {
    const LS_U08 NumberOfChannel;
    const MOTOR_ParameterType *ptrParameter;
    MOTOR_AttributeType *ptrAttribute;
    MOTOR_MalDataType   *pMalData;
} MOTOR_ConfigType;
#ifdef __cplusplus
}
#endif
#endif /* _MOTOR_CFG_H */

