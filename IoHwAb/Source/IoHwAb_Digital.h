/**    @file      IoHwAb_Digital.h
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

/** \page   IoHwAb_Digital IoHwAb_Digital
*  The IoHwAb_Digital.h header file should be included in an application as follows:
*  @code
#include IoHwAb_Digital.h
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
*  IoHwAb_Digital_Init();
*  @endcode
*
*  ## Main Operation #
*
*  Brief description of the API/operation
*
*  @code
*  IoHwAb_Digital_MainFunction();
*  @endcode
*
*  ## Desgin and Interface #
*  \image html IoHwAb_Digital.png
*/
#ifndef _IOHWAB_DIGITAL_H
#define _IOHWAB_DIGITAL_H  1

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
* @defgroup IoHwAb_Digital IoHwAb_Digital
*
* @{
*/

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_LS0                   */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_LS0(IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Read_LS0(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_LS1                   */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_LS1(IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Read_LS1(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_MFB                    */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_MFB(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_HALL1                  */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_HALL1(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_HALL2                  */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_HALL2(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_HALLPower             */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_HALLPower(IoHwAb_LevelType newValue);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_UP_IN                  */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_UP_IN(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_OPEN_IN                */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_OPEN_IN(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_CLOSE_IN               */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_CLOSE_IN(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_SW1_IN                 */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_SW1_IN(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_SW2_IN                 */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_SW2_IN(void);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_SW_PW1                */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_SW_PW1(IoHwAb_LevelType newValue);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_SW_PW2                */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_SW_PW2(IoHwAb_LevelType newValue);


/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_IGN_IN                 */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_IGN_IN(void);

/** @} */
#ifdef __cplusplus
}
#endif
#endif /* _IOHWAB_DIGITAL_H */

