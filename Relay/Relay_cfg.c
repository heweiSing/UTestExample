/**    @file
*      Generated on 3 Mar 2020
*      File name:   Relay_cfg.c
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
#include "relay_cfg.h"
#include  "string.h"
#include "IoHWab_Digital.h"

const RELAY_ParameterType gRELAYParameter[MAX_RELAY_CHANNELS] = {
	{ IoHwAb_Digital_Write_LS0, 
	  IoHwAb_Digital_Write_LS1, 
	  IoHwAb_Digital_Read_MFB
	}
};

RELAY_AttributeType gRELAYAttribute[MAX_RELAY_CHANNELS]; 

const RELAY_ConfigType gRELAYConfig = {
    MAX_RELAY_CHANNELS,
    gRELAYParameter,
    gRELAYAttribute
};
