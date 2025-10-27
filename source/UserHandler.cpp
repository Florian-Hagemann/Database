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

        std::cout << "Substring counter: " << subStringCounter << std::endl;

        nextIndex = rawInput.find(' ', lastIndex + 1);
        endReached = (rawInput.find(' ', lastIndex) == -1) ? true : false;
        
        std::cout << "End reached? : " << endReached << std::endl;
        std::cout << "Next reached index: " << nextIndex << std::endl;

        if(endReached) {
            /*
            std::cout << "End reached index: " << lastIndex << std::endl;
            
            try {
                
                parsedInput.at(subStringCounter) = rawInput.substr(lastIndex, rawInput.length() - 1);

            } catch(const std::out_of_range& e) {

                parsedInput.push_back(rawInput.substr(lastIndex, rawInput.length() - 1));

            }
*/
        } else {

            try {

                parsedInput.at(subStringCounter) = rawInput.substr(lastIndex, nextIndex - lastIndex);

            } catch(const std::out_of_range& e) {

                parsedInput.push_back(rawInput.substr(lastIndex, nextIndex - lastIndex));

            }

            std::cout << parsedInput.at(subStringCounter) << std::endl; 

        }

        lastIndex = nextIndex;
        subStringCounter++;

    }

}

int UserHandler::handleInput() {

    std::cout << "$ db ";
    std::getline(std::cin, rawInput);

    std::cout << rawInput << std::endl;

    parseInput();

    for(int i = 0; i < parsedInput.size(); i++) {
        std::cout << parsedInput.at(i) << std::endl;
    }

    return 1;

}
