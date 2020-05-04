/**    @file      Hall_cfg.h
*      Generated on 22 Apr 2020
*
*      @version :  1.0
*      GeneratorVersion:  
*
*      @copyright Liteon Auto
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

#ifndef _HALL_CFG_H_
#define _HALL_CFG_H_  1

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
/**
* @ingroup  Hall Hall
*
* @{
*/
#define HALL_MAX_CHANNELS  1u
/*****************************************************************************/
/* Define Parameters                                                         */
/*****************************************************************************/
typedef struct {
    LS_U08 p1;
} HALL_ParameterType;
/*****************************************************************************/
/* Define Attributes                                                         */
/*****************************************************************************/
typedef struct {
    LS_U08 state;
} HALL_AttributeType;
/*****************************************************************************/
/* Define Attribute wrap                                                     */
/*****************************************************************************/
typedef struct {
    const LS_U08 NumberOfChannel;
    const HALL_ParameterType *ptrParameter;
    HALL_AttributeType *ptrAttribute;
} HALL_ConfigType;
/** @} */
#ifdef __cplusplus
}
#endif
#endif /* _HALL_CFG_H_ */

