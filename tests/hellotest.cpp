#include<gtest/gtest.h>

TEST(MyTestSuite, MyTestCase) {
    ASSERT_TRUE(true);
    ASSERT_EQ(func(1,1), 2);
    ASSERT_EQ(func(2,5), 7);
}