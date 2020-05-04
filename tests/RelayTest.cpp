#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
#include "Relay.h"
}

TEST_GROUP(RelayTest)
{
	void setup()
	{
		RELAY_Init();
	}

	void teardown()
	{
		mock("DIO").checkExpectations();
		mock().clear();
	}
};

TEST(RelayTest, RELAY_Set)
{
	mock("DIO")
		.expectOneCall("IoHwAb_Digital_Write_LS0")
		.withParameter("newValue", LS_ON);

	mock("DIO")
		.expectOneCall("IoHwAb_Digital_Write_LS1")
		.withParameter("newValue", LS_OFF);

	RELAY_Set(0, RelaySetOpen);
}

TEST(RelayTest, IORead)
{
	mock("DIO")
		.expectOneCall("IoHwAb_Digital_Read_MFB") 
		.andReturnValue(2);
	LONGS_EQUAL(3, RELAY_Get(0, RelayGetMFB));

}