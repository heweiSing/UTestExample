/**    @file
*      Generated on 22 Apr 2020
*      File name:   Hall.c
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
#include "hall.h"
#include  "string.h"

#include "HALL_cfg.h"
extern HALL_ConfigType gHALLConfig;
HALL_AttributeType *HALLAttribute = NULL;
const HALL_ParameterType *HALLParameter = NULL;

/***************************************************************************/
/* @Function name:void HALL_Init                                            */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_Init(void)
{
    /* system generated code */

    HALL_ChannelType  channel;
    HALLAttribute = gHALLConfig.ptrAttribute;
    HALLParameter = gHALLConfig.ptrParameter;
    /* Do the initialization off attribute */
    for (channel=0; channel<gHALLConfig.NumberOfChannel; channel++)
    {
         (void) memset((void *) &HALLAttribute[channel], 0, sizeof(HALL_AttributeType));
    }
    /* Setup other initialization parameters */
}

/***************************************************************************/
/* @Function name:void HALL_MainFunction                                    */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_MainFunction(void)
{
    /* system generated code */

}

/***************************************************************************/
/* @Function name:void HALL_Set                                             */
/* @Description  :                                                          */
/* @Parameters   :HALL_ChannelType channel,HALL_SetType cmd                 */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_Set(HALL_ChannelType channel,HALL_SetType cmd)
{
    /* system generated code */

    if (channel <HALL_MAX_CHANNELS)
    {
        switch (cmd) 
        {
            case HallSetDisable:
            break;
            case HallSetEnable:
            break;
            case HallSetPowerOn:
            break;
            case HallSetPowerOff:
            break;
            case HallSetTravelReset:
            break;
            case HallSetDetectFault:
            break;
            default:
            break;
        }
    }
}

/***************************************************************************/
/* @Function name:LS_U16 HALL_Get                                           */
/* @Description  :                                                          */
/* @Parameters   :HALL_ChannelType channel,HALL_GetType cmd                 */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
LS_U16 HALL_Get(HALL_ChannelType channel,HALL_GetType cmd)
{
    /* system generated code */

    LS_U16 iRet = 0;
    if (channel < HALL_MAX_CHANNELS)
    {
        switch (cmd) 
        {
            case HallGetCount0:
            break;
            case HallGetCount1:
            break;
            case HallGetPulseWidth0:
            break;
            case HallGetPulseWidth1:
            break;
            case HallGetFault:
            break;
            case HallGetFaultMsg:
            break;
            case HallGetTravelValue:
            break;
            default:
            break;
        }
    }
    return iRet;
}
