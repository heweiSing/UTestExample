/**    @file      Hall.h
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

/** \page   Hall Hall
*  The Hall.h header file should be included in an application as follows:
*  @code
#include Hall.h
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
*  Hall_Init();
*  @endcode
*
*  ## Main Operation #
*
*  Brief description of the API/operation
*
*  @code
*  Hall_MainFunction();
*  @endcode
*
*  ## Desgin and Interface #
*  \image html Hall.png
*/
#ifndef _HALL_H_
#define _HALL_H_  1

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
* @defgroup Hall Hall
*
* @{
*/
/**

* Define the Channel type
*/
typedef LS_U08 HALL_ChannelType;
/**

* Define the Set/Get type
*/
typedef enum 
{
    HallSetDisable= 0 ,
    HallSetEnable= 1 ,
    HallSetPowerOn= 2 ,
    HallSetPowerOff= 3 ,
    HallSetTravelReset= 4 ,
    HallSetDetectFault= 5 ,
} HALL_SetType;
/**

* Define the Get type
*/
typedef enum 
{
    HallGetCount0= 0 ,
    HallGetCount1= 1 ,
    HallGetPulseWidth0= 2 ,
    HallGetPulseWidth1= 3 ,
    HallGetFault= 4 ,
    HallGetFaultMsg= 5 ,
    HallGetTravelValue= 6 ,
} HALL_GetType;

/* @brief: Define the genereate function prototype */

/*!
*  @b void HALL_Init
*  @n
*    Description of this API operation
*
*   @pre  Precondition before using this API
*

*  @param void
*  @return void
*
*  @sa  Relevant API
*
*/
void HALL_Init(void);


/*!
*  @b void HALL_MainFunction
*  @n
*    Description of this API operation
*
*   @pre  Precondition before using this API
*

*  @param void
*  @return void
*
*  @sa  Relevant API
*
*/
void HALL_MainFunction(void);


/*!
*  @b void HALL_Set
*  @n
*    Description of this API operation
*
*   @pre  Precondition before using this API
*

*  @param channel        Description of the argument.

*  @param cmd            Description of the argument.

*  @return void
*
*  @sa  Relevant API
*
*/
void HALL_Set(HALL_ChannelType channel, HALL_SetType cmd);


/*!
*  @b LS_U16 HALL_Get
*  @n
*    Description of this API operation
*
*   @pre  Precondition before using this API
*

*  @param channel        Description of the argument.

*  @param cmd            Description of the argument.

*  @return LS_U16        Description of the return value.
*
*  @sa  Relevant API
*
*/
LS_U16 HALL_Get(HALL_ChannelType channel, HALL_GetType cmd);

/** @} */
#ifdef __cplusplus
}
#endif
#endif /* _HALL_H_ */

