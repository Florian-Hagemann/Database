#include<iostream>
#include<string>
#include<vector>

#include "UserHandler.h"

void UserHandler::parseInput() {
    
    // expected is input in form of [command] [arg1] [arg2] ...
    // number of args ofc depends on command

    int delimiterIndex = -1;
    int count = 0;

    while(rawInput.find(' ', delimiterIndex + 1) != std::string::npos) {

        delimiterIndex = rawInput.find(' ', delimiterIndex + 1);

        // catching out of bounds exception
        try {

            parsedInput[count] = rawInput.substr(delimiterIndex, rawInput.find(' ', delimiterIndex + 1));

        } catch(const std::out_of_range& e) {

            parsedInput.push_back(rawInput.substr(delimiterIndex, rawInput.find(' ', delimiterIndex + 1)));

        }

        count++;

    }

}

int UserHandler::handleInput() {

    std::cout << "$ db ";
    std::cin >> rawInput;

    std::cout << rawInput << std::endl;

    parseInput();

    for(std::string s : parsedInput) {
        std::cout << s << std::endl;
    }

    return 1;

}
