#include<string>

class UserHandler {
    public:
    int handleInput(); // int for loop (0 : user wants to exit, else do stuff)
    private:
    std::string rawInput;
    int parseInput(std::string* ptrInput);
};

