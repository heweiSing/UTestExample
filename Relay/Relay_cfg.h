/**    @file
*      Generated on 3 Mar 2020
*      File name:   Relay_cfg.h
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

#ifndef _RELAY_CFG_H
#define _RELAY_CFG_H  1

/*****************************************************************************/
/* Included standard header files                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Included other header files                                               */
/*****************************************************************************/
#include "LS_Portable.h"
#include "IoHwAb_Digital.h"
#define MAX_RELAY_CHANNELS  1u


typedef  LS_U08 (*IO_PIN_SET)(LS_U08 value);
typedef  LS_U08 (*IO_PIN_GET) ();

#define MAX_RELAY_CFG 1


/*****************************************************************************/
/* Define Parameters                                                         */
/*****************************************************************************/
typedef struct {
      IO_PIN_SET  PChannel;
      IO_PIN_SET  NChannel;
	  IO_PIN_GET  GetMFB  ;
} RELAY_ParameterType;
/*****************************************************************************/
/* Define Attributes                                                         */
/*****************************************************************************/
typedef struct {
    LS_U08 state;
} RELAY_AttributeType;


/*****************************************************************************/
/* Define Attribute wrap                                                     */
/*****************************************************************************/
typedef struct {
    const LS_U08 NumberOfChannel;
    const RELAY_ParameterType *ptrParameter;
    RELAY_AttributeType *ptrAttribute;
} RELAY_ConfigType;
#endif /* _RELAY_CFG_H */

