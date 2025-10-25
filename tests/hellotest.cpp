#include<gtest/gtest.h>
#include "func.h"

TEST(MyTestSuite, MyTestCase) {
    ASSERT_TRUE(true);
    EXPECT_EQ(func(1,1), 2);
    EXPECT_EQ(func(2,5), 7);
}