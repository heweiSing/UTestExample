/**    @file
*      Generated on 5 Mar 2020
*      File name:   IoHwAb_Analog.c
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
#include "iohwab_analog.h"
#include  "string.h"

#include "Adc.h"
#include "IoHwAb_Channel.h"
/*****************************************************************************/
/*  Local Define                                                             */
/*****************************************************************************/
#define IOHWAB_GOOD    0u

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Analog_Read_Vbat                    */
/* @Description  :                                                          */
/* @param *value:         IoHwAb_AnalogValueType                            */
/* @param *status:        IoHwAb_StatusType                                 */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Analog_Read_Vbat(IoHwAb_AnalogValueType *value, IoHwAb_StatusType *status)
{
    /* system generated code */

    *value = Adc_ReadChannel(AdcConf_AdcChannel_Vbat);
    status->quality = IOHWAB_GOOD;
    return E_OK;
}
