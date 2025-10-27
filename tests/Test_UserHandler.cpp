#include<gtest/gtest.h>
#include<string>
#include"UserHandler.h"

TEST(TestUserHandler, TestParsing) {

    UserHandler userHandler;

    // test cases
    std::vector<std::string> testCase = {"123 abc 321", "aaaaaaaaaa", "hello world"};
    std::vector<std::vector<std::string>> expectedResult = {{"123", "abc", "321"}, {"aaaaaaaaaa"}, {"hello", "world"}};

    // test those cases
    // ! make sure that there are as many test cases as expected results !
    // ! else test will FAIL !
    // TODO make sure that doesnt happen
    for(int i = 0; i < testCase.size(); i++) {
        EXPECT_EQ(userHandler.parseInput(&testCase.at(i)), expectedResult.at(i));
    }

}
