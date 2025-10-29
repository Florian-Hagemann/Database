#include<string>
#include<fstream>

class Database{
    std::fstream fileStream;
    public:
    void open(std::string fileName);
    void close();
    void append();
    void remove();
};