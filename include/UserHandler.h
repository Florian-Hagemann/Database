#include<string>
#include<vector>

class UserHandler {
    public:
    int handleInput(); // int for loop (0 : user wants to exit, else do stuff)
    private:
    std::string rawInput;
    std::vector<std::string> parsedInput;
    void parseInput(std::string* PRT_rawInput);
};

