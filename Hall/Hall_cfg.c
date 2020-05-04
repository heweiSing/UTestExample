/**    @file
*      Generated on 22 Apr 2020
*      File name:   Hall_cfg.c
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
#include "hall_cfg.h"
#include  "string.h"

const HALL_ParameterType gHALLParameter = {
0u,
};
HALL_AttributeType gHALLAttribute[HALL_MAX_CHANNELS]; 
const HALL_ConfigType gHALLConfig = {
    HALL_MAX_CHANNELS,
    &gHALLParameter,
    gHALLAttribute
};
