#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
ASSERT_NEAR(1.414214,calc(2.0), 0.000001);

}

TEST(task1, test2)
{
ASSERT_NEAR(2.236068,calc(5.0), 0.000001);

}

TEST(task1, test3)
{
ASSERT_NEAR(15.099669,calc(228.0), 0.000001);

}

TEST(task1, test4)
{
ASSERT_NEAR(445.248245,calc(198246.0), 0.000001);

}

TEST(task1, test5)
{
ASSERT_NEAR(14.071247,calc(198.0), 0.000001);

}

TEST(task1, test6)
{
ASSERT_NEAR(11.532563,calc(133.0), 0.000001);

}

TEST(task1, test7)
{
ASSERT_NEAR(15.099669,calc(228.0), 0.000001);

}

TEST(task1, test8)
{
ASSERT_NEAR(115.706525,calc(13388.0), 0.000001);

}

TEST(task1, test9)
{
ASSERT_NEAR(25.258662,calc(638.0), 0.000001);

}

TEST(task1, test10)
{
ASSERT_NEAR(7.937254,calc(63.0), 0.000001);

}