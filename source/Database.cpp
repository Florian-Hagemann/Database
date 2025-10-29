#include"Database.h"
#include<string>
#include<fstream>

void Database::open(std::string fileName) {

    // Close open file stream
    if(fileStream.is_open()) {
        fileStream.close();
    }

    // open new one
    fileStream.open(fileName + ".db");

    // check if it worked
    if(!fileStream.is_open()) {
        throw std::runtime_error("Failed to open database file: " + fileName + ".db");
    }

}

void Database::close() {

    fileStream.close();

}