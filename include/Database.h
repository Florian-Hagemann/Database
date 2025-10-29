#include<string>
#include<fstream>

class Database{
    std::fstream fileStream;
    public:
    void open(std::string fileName);
    void close(std::string fileName);
    void append();
    void remove();
};