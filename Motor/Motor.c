/**    @file
*      Generated on 3 Mar 2020
*      File name:   Motor.c
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
*      Liteon Auto. The programs(s) may be used and/or copied only with the
*      written permission of LiteonAuto or in accordance with the terms and
*      conditions stipulated in the agreement/contract under which the
*      program(s) have been supplied.
*
******************************************************************************/
/* History                                                                   */
/*---------------------------------------------------------------------------- 
 ID: Datetime: Author: 
 P: problem, 
 C: Root cause: 
 S: solution, 
 V: Verify
*/

/*****************************************************************************/
/* Included standard header files                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Included other header files                                               */
/*****************************************************************************/
#include "LS_Portable.h"
#include "motor.h"
#include  "string.h"

#include "MOTOR_cfg.h"

#include "relay.h"
#include "timebase.h"

/*******************************************************************************/
/* Private Defines															   */
/*******************************************************************************/


/*******************************************************************************/
/* Private API Function Definition											   */
/*******************************************************************************/
#define		MOTOR_IsRelayStick(channel)		    (malData[channel].StickTm  == LS_CLEAR)
#define		MOTOR_IsDelayEnd(channel)		    (malData[channel].DelayTm  == LS_CLEAR)

/*******************************************************************************/
/* Private Function Declaration												   */
/*******************************************************************************/
static void MOTOR_StateHandler(void);
static void MOTOR_StickHandler(void);


/*******************************************************************************/
/* Private Attribute Declaration    										   */
/*******************************************************************************/
extern MOTOR_ConfigType gMOTORConfig;
MOTOR_AttributeType *MOTORData = NULL;
MOTOR_MalDataType   *malData = NULL;
const MOTOR_ParameterType *MOTORParameter = NULL;

/***************************************************************************/
/* @Function name:void MOTOR_Init                                           */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_Init(void)
{
    /* system generated code */

    LS_U08  channel;
    MOTORData = gMOTORConfig.ptrAttribute;
	  malData = gMOTORConfig.pMalData;
    MOTORParameter = gMOTORConfig.ptrParameter;
    /* Do the initialization off attribute */
    for (channel=0; channel<gMOTORConfig.NumberOfChannel; channel++)
    {
		MOTORData[channel].RunFlag = LS_OFF;
		MOTORData[channel].RunTm  	= MOTOR_OVERRUN_TM;
		MOTORData[channel].SleepTm	= MOTOR_SLEEP_TM;
		MOTORData[channel].StopTm	= MOTOR_STOP_TM;
	
		/* Initialize Malfunction Data */
		malData[channel].State	= malIdle;
		malData[channel].StickTm = MAL_STICK_TM;
    }
    /* Setup other initialization parameters */
    RELAY_Init();
}

/***************************************************************************/
/* @Function name:void MOTOR_MainFunction                                   */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_MainFunction(void)
{
    /* system generated code */
	MOTOR_ChannelType channel;	

    if (TBM_PollData(TBM_5ms))
    {
		  MOTOR_StickHandler();
	
		  if (TBM_PollData(TBM_100ms))
		  {
			  MOTOR_StateHandler();		
		  }
	  
#if 1
		  for (channel = 0; channel < gMOTORConfig.NumberOfChannel; channel ++)
		  {
			  if (MOTORData[channel].StopTm)
			  {
				  MOTORData[channel].StopTm--;
			  }
		  }
#endif
	}
}

/***************************************************************************/
/* @Function name:void MOTOR_Set                                            */
/* @Description  :                                                          */
/* @Parameters   :MOTOR_ChannelType channel,MOTOR_SetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void MOTOR_Set(MOTOR_ChannelType channel,MOTOR_SetType cmd)
{
    /* system generated code */

    if (channel <MOTOR_MAX_CHANNELS)
    {
      switch (cmd) 
      {
          case MotorSetOpen:
  			MOTORData[channel].RunFlag = LS_ON ; 
  			MOTORData[channel].SleepTm	= MOTOR_SLEEP_TM ;
  			
  			malData[channel].State 	= malIdle;
  			malData[channel].StickTm	= MAL_STICK_TM;
  			
  			RELAY_Set(channel, RelaySetOpen);		
          break;
          case MotorSetClose:
  			MOTORData[channel].RunFlag = LS_ON ; 
  			MOTORData[channel].SleepTm	= MOTOR_SLEEP_TM ;			
  			malData[channel].State 	= malIdle;
  			malData[channel].StickTm	= MAL_STICK_TM;
  			RELAY_Set(channel, RelaySetClose);		
          break;
          case MotorSetStop:
  			MOTORData[channel].RunFlag	= LS_OFF; 
  			MOTORData[channel].RunTm	= MOTOR_OVERRUN_TM;	
  			RELAY_Set(channel, RelaySetStop);		
          break;
          case MotorSetClrSleep:
  			MOTORData[channel].SleepTm	 = MOTOR_SLEEP_TM;
          break;
          default:
          break;
          }
    }
}

/***************************************************************************/
/* @Function name:LS_U16 MOTOR_Get                                          */
/* @Description  :                                                          */
/* @Parameters   :MOTOR_ChannelType channel,MOTOR_GetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
LS_U16 MOTOR_Get(MOTOR_ChannelType channel,MOTOR_GetType cmd)
{
    /* system generated code */

    LS_U16 iRet = 0;
    if (channel < MOTOR_MAX_CHANNELS)
    {
      switch (cmd) 
      {
          case MotorGetRunningState:
  			iRet = MOTORData[channel].RunFlag;		
          break;
          case MotorGetOverRunState:
  			iRet= (MOTORData[channel].RunTm == LS_CLEAR);
          break;
          case MotorGetRelayFaultState:
  			iRet = (malData[channel].State != malIdle);	
          break;
          case MotorGetSleepState:
  			if ( (MOTORData[channel].SleepTm == LS_CLEAR) && 
  				 (malData[channel].State	  == malIdle ) )
  				iRet = LS_ON;
  			else
  				iRet = LS_OFF;
          break;
          case MotorGetStopDebEnd:
  			iRet = (LS_CLEAR == MOTORData[channel].StopTm);	
          break;
          case MotorGetStopDebCnt:
  			iRet = (MOTORData[channel].StopTm);	
          break;
          default:
  			iRet = LS_OFF;
          break;
      }
    }
    return iRet;
}


/*******************************************************************************/
/* Private Function Definition												   */
/*******************************************************************************/ 

/*******************************************************************************/
/* Function name : MOTOR_StateHandler()										   */
/* Description	 : Detect Motor OverRun or Sleep							   */
/* Parameters	 : N.A														   */
/* Returns       : N.A														   */
/* Remark		 : N.A														   */
/*******************************************************************************/
static void MOTOR_StateHandler(void)
{
	MOTOR_ChannelType channel;	
	for (channel = 0; channel < gMOTORConfig.NumberOfChannel; channel ++)
	{
		/* Motor is Running */
		if (MOTORData[channel].RunFlag)
		{
			if (MOTORData[channel].RunTm)
			{
				MOTORData[channel].RunTm--;
			}
		}
		/* Motor is Stop */	
		else
		{
			if (MOTORData[channel].SleepTm)
			{
				MOTORData[channel].SleepTm--;
			}
		}
	}
}

/*******************************************************************************/
/* Function name : MOTOR_StickHandler()										   */
/* Description	 : Detect Relay Stick or not								   */ 
/* Parameters	 : N.A														   */
/* Returns       : N.A														   */
/* Remark		 : N.A														   */
/*******************************************************************************/
static void MOTOR_StickHandler(void)
{
	MOTOR_ChannelType channel;	
	
	for (channel = 0; channel < gMOTORConfig.NumberOfChannel; channel ++)
	{
		if (malData[channel].DelayTm)
			malData[channel].DelayTm--;
		
		if (MOTORData[channel].RunFlag == LS_OFF)
		{
			/* Mal function feedback channel */
			if (RELAY_Get(channel, RelayGetMFB))
			{
				if (malData[channel].StickTm)
					malData[channel].StickTm--;
			}
			else
			{
				malData[channel].StickTm = MAL_STICK_TM;
			}
		}		

		switch (malData[channel].State)
		{
			case malIdle:
			
				if (MOTOR_IsRelayStick(channel))
				{
					malData[channel].TryCount = MAL_TRY_TIMES;
					malData[channel].DelayTm	 = MAL_RELAYON_TM;				
					malData[channel].State	 = malRelayOn;
					/* Stop the relay */
					RELAY_Set(channel, RelaySetBrake);
					/*
					IO_SetMotorP(LS_ON);
					IO_SetMotorN(LS_ON);
					*/
				}
				
			break;
			
			case malRelayOn:
			
				if (MOTOR_IsDelayEnd(channel))
				{
					malData[channel].DelayTm = MAL_RELAYOFF_TM;
					malData[channel].State   = malRelayOff;
					/* Stop the relay */
					RELAY_Set(channel, RelaySetStop);
					/*
					IO_SetMotorP(LS_OFF);
					IO_SetMotorN(LS_OFF);
					*/
				}	
		
			break;
			
			case malRelayOff:
			
				if (MOTOR_IsDelayEnd(channel))
				{
					malData[channel].TryCount--;
					
					/* Malfunction Try Continue */
					if (malData[channel].TryCount)
					{
						malData[channel].DelayTm = MAL_RELAYON_TM;
						malData[channel].State   = malRelayOn;
						/* Stop the relay */
					    RELAY_Set(channel, RelaySetBrake);
						/*
						IO_SetMotorP(LS_ON);
						IO_SetMotorN(LS_ON);
						*/
					}
					/* Malfunction Try Finish */
					else
					{
						if (MOTOR_IsRelayStick(channel))
						{
							malData[channel].State = malFailure;
							/* Stop the relay */
							RELAY_Set(channel, RelaySetBrake);							
							/*
							IO_SetMotorP(LS_ON);
							IO_SetMotorN(LS_ON);
							*/
						}
						else
						{
							malData[channel].State = malIdle;
						}
					}				
				}
				
			break;
			
			case malFailure:
			break;
			
			default:
				malData[channel].State = malIdle;
			break;
		}
	}
}

