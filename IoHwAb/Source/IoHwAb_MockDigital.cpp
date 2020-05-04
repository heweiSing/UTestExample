/**    @file
*      Generated on 23 Mar 2020
*      File name:   IoHwAb_Digital.c
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

#include "CppUTestExt/MockSupport.h"

extern "C"
{
	#include "LS_Portable.h"
	#include "IoHwAb_Digital.h"
}

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_LS0                   */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_LS0(IoHwAb_LevelType newValue)
{
	mock("DIO")
		.actualCall("IoHwAb_Digital_Write_LS0")
		.withParameter("newValue", (int)newValue);
	return 0;

}
Std_ReturnType IoHwAb_Digital_Read_LS0(void)
{
   return mock("DIO")
		.actualCall("IoHwAb_Digital_Read_LS0")
		.returnValue().getIntValue();
}

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Write_LS1                   */
/* @Description  :                                                          */
/* @param newValue:       IoHwAb_LevelType                                  */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Write_LS1(IoHwAb_LevelType newValue)
{
	mock("DIO")
		.actualCall("IoHwAb_Digital_Write_LS1")
		.withParameter("newValue", (int)newValue);
	return 0;
}
Std_ReturnType IoHwAb_Digital_Read_LS1(void)
{
	return mock("DIO")
		.actualCall("IoHwAb_Digital_Read_LS1")
		.returnValue().getIntValue();
}

/****************************************************************************/
/* @Function name:Std_ReturnType IoHwAb_Digital_Read_MFB                    */
/* @Description  :                                                          */
/* @param void                                                              */
/* @return Std_ReturnTypeDescription of the return value.                   */
/* @Remark       :                                                          */
/****************************************************************************/
Std_ReturnType IoHwAb_Digital_Read_MFB(void)
{
	return mock("DIO")
		.actualCall("IoHwAb_Digital_Read_MFB")
		.returnValue().getIntValue();
}

