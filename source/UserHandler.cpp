#include<iostream>
#include<string>
#include<vector>

#include "UserHandler.h"

std::vector<std::string> UserHandler::parseInput(std::string* PTR_rawInput) {
    
    // expected is input in form of [command] [arg1] [arg2] ...
    // number of args ofc depends on command

    std::vector<std::string> parsedInput;
    
    std::string temp;
    
    // loop through string and collect tokens delimited by ' '
    for(int i = 0; i < PTR_rawInput->size(); i++) {

        if(PTR_rawInput->at(i) == ' ') {

            parsedInput.push_back(temp);
            temp.clear();

        } else {

            temp += PTR_rawInput->at(i);

        }

    }

    // push back last temp string and return the parsed Input
    parsedInput.push_back(temp);
    return parsedInput;

}

int UserHandler::handleInput() {

    std::string rawInput;

    std::cout << "$ db ";
    std::getline(std::cin, rawInput);

    std::vector<std::string> parsedInput = parseInput(&rawInput);



    return 1;

}
