/**    @file
*      Generated on 3 Mar 2020
*      File name:   Motor_cfg.c
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
#include "motor_cfg.h"
#include  "string.h"

const MOTOR_ParameterType gMOTORParameter = {
0u,
};
MOTOR_AttributeType gMOTORAttribute[MOTOR_MAX_CHANNELS]; 
MOTOR_MalDataType	gMOTORMalData[MOTOR_MAX_CHANNELS];
const MOTOR_ConfigType gMOTORConfig = {
    MOTOR_MAX_CHANNELS,
    &gMOTORParameter,
    gMOTORAttribute,
	gMOTORMalData
};
