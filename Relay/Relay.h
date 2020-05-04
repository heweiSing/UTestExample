/**    @file
*      Generated on 3 Mar 2020
*      File name:   Relay.h
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

#ifndef _RELAY_H
#define _RELAY_H  1

/*****************************************************************************/
/* Included standard header files                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Included other header files                                               */
/*****************************************************************************/
#include "LS_Portable.h"

/* @brief: Define the Channel type */
typedef LS_U08 RELAY_ChannelType;
/* @brief: Define the Set/Get type */
typedef enum 
{
    RelaySetOpen= 0 ,
    RelaySetClose= 1 ,
    RelaySetStop= 2 ,
    RelaySetBrake= 3 ,
} RELAY_SetType;
/* @brief: Define the Get type */
typedef enum 
{
    RelayGetMFB= 0 ,
} RELAY_GetType;
/* @brief: Define the genereate function prototype */

/***************************************************************************/
/* @Function name:void RELAY_Init                                           */
/* @Description  :                                                          */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void RELAY_Init(void);


/***************************************************************************/
/* @Function name:void RELAY_Set                                            */
/* @Description  :                                                          */
/* @Parameters   :RELAY_ChannelType channel,RELAY_SetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void RELAY_Set(RELAY_ChannelType channel,RELAY_SetType cmd);


/***************************************************************************/
/* @Function name:LS_U16 RELAY_Get                                          */
/* @Description  :                                                          */
/* @Parameters   :RELAY_ChannelType channel,RELAY_GetType cmd               */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
LS_U16 RELAY_Get(RELAY_ChannelType channel,RELAY_GetType cmd);

#endif /* _RELAY_H */

