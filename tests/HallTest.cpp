#include "CppUTest/TestHarness.h"

extern "C"
{
#include "Hall.h"
}

TEST_GROUP(Hall)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(Hall, test1)
{
	HALL_ChannelType channel = 0;
	HALL_GetType cmd = HallGetCount0;
	LONGS_EQUAL(1, HALL_Get(channel, HallGetCount0));
}

TEST(Hall, test2)
{
	HALL_ChannelType channel = 1;
	HALL_GetType cmd = HallGetCount0;
	LONGS_EQUAL(0, HALL_Get(channel, HallGetCount0));
}