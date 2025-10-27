#include<iostream>
#include<string>
#include<vector>

#include "UserHandler.h"

void UserHandler::parseInput(std::string* PTR_rawInput) {
    
    // expected is input in form of [command] [arg1] [arg2] ...
    // number of args ofc depends on command

    int lastIndex = 0;
    int nextIndex = 0;
    int subStringCounter = 0;
    bool endReached = false;

    while(!endReached) {

        nextIndex = PTR_rawInput->find(' ', lastIndex + 1);
        endReached = (PTR_rawInput->find(' ', lastIndex) == std::string::npos) ? true : false;

        if(!endReached) {
        
            try {

                parsedInput.at(subStringCounter) = PTR_rawInput->substr(lastIndex, nextIndex - lastIndex);

            } catch(const std::out_of_range& e) {

                parsedInput.push_back(PTR_rawInput->substr(lastIndex, nextIndex - lastIndex));

            }

        }

        lastIndex = nextIndex;
        subStringCounter++;

    }

}

int UserHandler::handleInput() {

    std::string rawInput;

    std::cout << "$ db ";
    std::getline(std::cin, rawInput);

    parseInput(&rawInput);

    return 1;

}
