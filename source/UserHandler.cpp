#include<iostream>
#include<string>
#include<vector>

#include "UserHandler.h"

void UserHandler::parseInput() {
    
    // expected is input in form of [command] [arg1] [arg2] ...
    // number of args ofc depends on command

    int lastIndex = 0;
    int nextIndex = 0;
    int subStringCounter = 0;
    bool endReached = false;

    while(!endReached) {

        nextIndex = rawInput.find(' ', lastIndex + 1);
        endReached = (rawInput.find(' ', lastIndex) == -1) ? true : false;

        if(!endReached) {
        
            try {

                parsedInput.at(subStringCounter) = rawInput.substr(lastIndex, nextIndex - lastIndex);

            } catch(const std::out_of_range& e) {

                parsedInput.push_back(rawInput.substr(lastIndex, nextIndex - lastIndex));

            }

        }

        lastIndex = nextIndex;
        subStringCounter++;

    }

}

int UserHandler::handleInput() {

    std::cout << "$ db ";
    std::getline(std::cin, rawInput);

    parseInput();

    return 1;

}
