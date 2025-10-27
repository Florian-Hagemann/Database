#include<gtest/gtest.h>
#include<string>
#include"UserHandler.h"

TEST(TestUserHandler, TestParsing) {

    UserHandler userHandler;

    std::vector<std::string> testCase = {"123 abc 321", "aaaaaaaaaa", "hello world"};
    std::vector<std::vector<std::string>> expectedResult = {{"123", "abc", "321"}, {"aaaaaaaaaa"}, {"hello", "world"}};

    for(int i = 0; i < testCase.size(); i++) {
        EXPECT_EQ(userHandler.parseInput(&testCase.at(i)), expectedResult.at(i));
    }

}
