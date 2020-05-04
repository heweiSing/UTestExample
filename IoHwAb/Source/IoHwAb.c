
#include "IoHwAb.h"
#include "icu.h"
#include "hall.h"


static LS_BOOL Initilized = LS_FALSE;

/* Callback */

static void IoHwAb_IcuNotification_Ch1( Icu_CaptureValueType value )
{
	//Icu_CaptureValueType value;
	Icu_ChannelType		 channel;
	HALL_ChannelType     hall_channel;
	channel = 0u;
	hall_channel = 0u;
	//value = Icu_GetCaptureValue(channel);
	// Hall_Interrupt ..
	HALL_Interrupt_Ch1(hall_channel, value);
	 // Notify the 
}

static void IoHwAb_IcuNotification_Ch2( Icu_CaptureValueType value )
{
	 // Notify the 
	//Icu_CaptureValueType value;
	HALL_ChannelType     hall_channel;
	Icu_ChannelType		 channel;
	channel = 1u;
	hall_channel = 0u;
	//value = Icu_GetCaptureValue(channel);
	// Hall_Interrupt.
	HALL_Interrupt_Ch2(hall_channel, value);	 
}


void IoHwAb_Init( void )
{
	/* TIM channel callback */

  Icu_SetNotification(0,IoHwAb_IcuNotification_Ch1);
	Icu_SetNotification(1,IoHwAb_IcuNotification_Ch2);
	Initilized = LS_TRUE;
	
}

void IoHwAb_MainFunction( void )
{
	

}


