#include<iostream>
#include<string>

#include "UserHandler.h"

int UserHandler::handleInput() {

    std::cout << "$ db ";
    std::cin >> rawInput;

    parseInput(&rawInput);

}
