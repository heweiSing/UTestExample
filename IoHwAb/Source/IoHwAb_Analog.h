/**    @file      IoHwAb_Analog.h
*      Generated on 23 Mar 2020
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

/** \page   IoHwAb_Analog IoHwAb_Analog
*  The IoHwAb_Analog.h header file should be included in an application as follows:
*  @code
#include IoHwAb_Analog.h
@endcode
*
*
*  # Operation #
*
*  Brief description of the operation
*
*  ## Initialization #
*
*  Brief description of the API/operation
*
*  @code
*  IoHwAb_Analog_Init();
*  @endcode
*
*  ## Main Operation #
*
*  Brief description of the API/operation
*
*  @code
*  IoHwAb_Analog_MainFunction();
*  @endcode
*
*  ## Desgin and Interface #
*  \image html IoHwAb_Analog.png
*/
#ifndef _IOHWAB_ANALOG_H
#define _IOHWAB_ANALOG_H  1

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
* @defgroup IoHwAb_Analog IoHwAb_Analog
*
* @{
*/

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Analog_Read_Vbat                    */
/* @Description  :                                                          */
/* @param *value:         IoHwAb_AnalogValueType                            */
/* @param *status:        IoHwAb_StatusType                                 */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Analog_Read_Vbat(IoHwAb_AnalogValueType *value, IoHwAb_StatusType *status);

/** @} */
#ifdef __cplusplus
}
#endif
#endif /* _IOHWAB_ANALOG_H */

