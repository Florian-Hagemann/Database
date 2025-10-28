#include<gtest/gtest.h>
#include<string>
#include"UserHandler.h"
#include<iostream>

TEST(TestUserHandler, TestParsing) {

    UserHandler userHandler;

    // test cases
    std::vector<std::string> testCase = {"123 abc 321", "aaaaaaaaaa", "hello world", "heyyy  yooo"};
    std::vector<std::vector<std::string>> expectedResult = {{"123", "abc", "321"}, {"aaaaaaaaaa"}, {"hello", "world"}, {"heyyy", "yooo"}};

    // test those cases
    // ! make sure that there are as many test cases as expected results
    // TODO make sure that doesnt happen

    ASSERT_EQ(testCase.size(), expectedResult.size()) 
        << "Cases and results differ in size: testCases=" << testCase.size()
        << ", expectedResults=" << expectedResult.size();

    for(int i = 0; i < testCase.size(); i++) {
        EXPECT_EQ(userHandler.parseInput(&testCase.at(i)), expectedResult.at(i));
    }

}
