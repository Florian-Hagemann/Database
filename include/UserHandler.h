#include<string>
#include<vector>

class UserHandler {
    public:
    int handleInput(); // int for loop (0 : user wants to exit, else do stuff)
    std::vector<std::string> parseInput(std::string* PRT_rawInput);
};

