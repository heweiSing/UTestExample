/**    @file
*      Generated on 22 Apr 2020
*      File name:   Hall_ut.c
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
#include "hall_ut.h"
#include  "string.h"

extern HALL_AttributeType *HALLAttribute;
extern HALL_ParameterType *HALLParameter;

/***************************************************************************/
/* @Function name:void HALL_UT_Init                                         */
/* @Description  :HALL_UT_TC_1                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_Init(void)
{
    /* system generated code */

    HALL_Init();
    //ADD_TEST_ID(HALL_Init);
    EXPECT_NO_NULL(HALLAttribute);
    EXPECT_NO_NULL(HALLParameter);
}

/***************************************************************************/
/* @Function name:void HALL_UT_MainFunction                                 */
/* @Description  :HALL_UT_TC_2                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_MainFunction(void)
{
    /* system generated code */

    HALL_MainFunction();
    //ADD_TEST_ID(HALL_MainFunction);
    /*Test case passed without exception!*/
    EXPECT_PASSED();
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetDisable                       */
/* @Description  :HALL_UT_TC_3                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetDisable(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetDisable;
    //ADD_TEST_ID(HallSetDisable);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetEnable                        */
/* @Description  :HALL_UT_TC_4                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetEnable(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetEnable;
    //ADD_TEST_ID(HallSetEnable);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetPowerOn                       */
/* @Description  :HALL_UT_TC_5                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetPowerOn(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetPowerOn;
    //ADD_TEST_ID(HallSetPowerOn);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetPowerOff                      */
/* @Description  :HALL_UT_TC_6                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetPowerOff(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetPowerOff;
    //ADD_TEST_ID(HallSetPowerOff);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetTravelReset                   */
/* @Description  :HALL_UT_TC_7                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetTravelReset(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetTravelReset;
    //ADD_TEST_ID(HallSetTravelReset);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_SetTest_HallSetDetectFault                   */
/* @Description  :HALL_UT_TC_8                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_SetTest_HallSetDetectFault(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_SetType cmd = HallSetDetectFault;
    //ADD_TEST_ID(HallSetDetectFault);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        HALL_Set(channel, cmd);
        /*Test case passed without exception!*/
        EXPECT_PASSED();
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetCount0                        */
/* @Description  :HALL_UT_TC_9                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetCount0(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetCount0;
    //ADD_TEST_ID(HallGetCount0);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetCount1                        */
/* @Description  :HALL_UT_TC_10                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetCount1(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetCount1;
    //ADD_TEST_ID(HallGetCount1);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetPulseWidth0                   */
/* @Description  :HALL_UT_TC_11                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetPulseWidth0(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetPulseWidth0;
    //ADD_TEST_ID(HallGetPulseWidth0);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetPulseWidth1                   */
/* @Description  :HALL_UT_TC_12                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetPulseWidth1(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetPulseWidth1;
    //ADD_TEST_ID(HallGetPulseWidth1);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetFault                         */
/* @Description  :HALL_UT_TC_13                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetFault(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetFault;
    //ADD_TEST_ID(HallGetFault);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetFaultMsg                      */
/* @Description  :HALL_UT_TC_14                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetFaultMsg(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetFaultMsg;
    //ADD_TEST_ID(HallGetFaultMsg);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UT_GetTest_HallGetTravelValue                   */
/* @Description  :HALL_UT_TC_15                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UT_GetTest_HallGetTravelValue(void)
{
    /* system generated code */

    HALL_ChannelType channel;
    HALL_GetType cmd = HallGetTravelValue;
    //ADD_TEST_ID(HallGetTravelValue);
    for (channel = 0; channel < HALL_MAX_CHANNELS; channel++)
    {
        /* 20 is just example, Tester need to configure the value before test!*/
        EXPECT_EQ(20, HALL_Get(channel, cmd));
    }
}

/***************************************************************************/
/* @Function name:void HALL_UTest_Run                                       */
/* @Description  :HALL_UT_TC_15                                              */
/* @Parameters   :                                                          */
/* @Returns      :                                                          */
/* @Remark       :                                                          */
/*****************************************************************************/
void HALL_UTest_Run(void)
{
    /* system generated code */

    HALL_UT_Init();
    HALL_UT_MainFunction();
    HALL_UT_SetTest_HallSetDisable();
    HALL_UT_SetTest_HallSetEnable();
    HALL_UT_SetTest_HallSetPowerOn();
    HALL_UT_SetTest_HallSetPowerOff();
    HALL_UT_SetTest_HallSetTravelReset();
    HALL_UT_SetTest_HallSetDetectFault();
    HALL_UT_GetTest_HallGetCount0();
    HALL_UT_GetTest_HallGetCount1();
    HALL_UT_GetTest_HallGetPulseWidth0();
    HALL_UT_GetTest_HallGetPulseWidth1();
    HALL_UT_GetTest_HallGetFault();
    HALL_UT_GetTest_HallGetFaultMsg();
    HALL_UT_GetTest_HallGetTravelValue();
}
