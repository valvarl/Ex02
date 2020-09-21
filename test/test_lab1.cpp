#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
ASSERT_DOUBLE_EQ(1.414214,getPrime(2.0));

}

TEST(task1, test2)
{
ASSERT_DOUBLE_EQ(2.236068,getPrime(5.0));

}

TEST(task1, test3)
{
ASSERT_DOUBLE_EQ(15.099669,getPrime(228.0));

}

TEST(task1, test4)
{
ASSERT_DOUBLE_EQ(445.248245,getPrime(198246.0));

}

TEST(task1, test5)
{
ASSERT_DOUBLE_EQ(14.071247,getPrime(198.0));

}

TEST(task1, test6)
{
ASSERT_DOUBLE_EQ(11.532563,getPrime(133.0));

}

TEST(task1, test7)
{
ASSERT_DOUBLE_EQ(15.099669,getPrime(228.0));

}

TEST(task1, test8)
{
ASSERT_DOUBLE_EQ(115.706525,getPrime(13388.0));

}

TEST(task1, test9)
{
ASSERT_DOUBLE_EQ(25.258662,getPrime(638.0));

}

TEST(task1, test10)
{
ASSERT_DOUBLE_EQ(7.937254,getPrime(63.0));

}