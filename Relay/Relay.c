/**    @file
*      Generated on 3 Mar 2020
*      File name:   Relay.c
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
#include "relay.h"
#include  "string.h"

#include "RELAY_cfg.h"


typedef struct 
{
	LS_U08 P;
	LS_U08 N;
	
} TS_CMD_ARRAY;

/*
    RelaySetOpen= 0 ,
    RelaySetClose= 1 ,
    RelaySetStop= 2 ,
    RelaySetBrake= 3 ,
*/

const TS_CMD_ARRAY  cmdToValue[4] = {
	{LS_ON, LS_OFF}, /* Open */
	{LS_OFF, LS_ON},  /* Close */
	{LS_OFF, LS_OFF},  /* Stop */
	{LS_ON, LS_ON},   /* BRAKE */		
};


extern RELAY_ConfigType gRELAYConfig;
RELAY_AttributeType *RELAYAttribute = NULL;
const RELAY_ParameterType *RELAYParameter = NULL;

/***************************************************************************/
/* @Function name:void RELAY_Init                                           */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void RELAY_Init(void)
{
    /* system generated code */

    LS_U08  i;
    RELAYAttribute = gRELAYConfig.ptrAttribute;
    RELAYParameter = gRELAYConfig.ptrParameter;
    /* Do the initialization off attribute */
    for (i=0; i<gRELAYConfig.NumberOfChannel; i++)
    {
         (void) memset((void *) &RELAYAttribute[i], 0, sizeof(RELAY_AttributeType));
    }
    /* Setup other initialization parameters */
}

/***************************************************************************/
/* @Function name:void RELAY_Set                                            */
/* @Description  :                                                          */
/* @Parameters   :RELAY_ChannelType channel,RELAY_SetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void RELAY_Set(RELAY_ChannelType channel,RELAY_SetType cmd)
{
    /* system generated code */

    if (channel >=MAX_RELAY_CHANNELS || (LS_U08) cmd >= 4u)
    {
        return;
    }



	(void) RELAYParameter[channel].PChannel(cmdToValue[cmd].P);
	(void) RELAYParameter[channel].NChannel(cmdToValue[cmd].N);

	/*
    switch (cmd) 
    {
        case RelaySetOpen:
        break;
        case RelaySetClose:
        break;
        case RelaySetStop:
        break;
        case RelaySetBrake:
        break;
        default:
        break;
    }
	*/
}

/***************************************************************************/
/* @Function name:LS_U16 RELAY_Get                                          */
/* @Description  :                                                          */
/* @Parameters   :RELAY_ChannelType channel,RELAY_GetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
LS_U16 RELAY_Get(RELAY_ChannelType channel,RELAY_GetType cmd)
{
    /* system generated code */

    LS_U16 iRet = 0;
    if (channel >=MAX_RELAY_CHANNELS)
    {
        return iRet;
    }
    switch (cmd) 
    {
        case RelayGetMFB:
			    iRet = RELAYParameter[channel].GetMFB();
        break;
        default:
        break;
    }
    return iRet;
}
