#include<gtest/gtest.h>
#include"Database.h"

TEST(DataBaseTest, TestFileOpening) {

    // db.open() should throw runtime error if any problems arrise
    Database db;
    db.open("testt");
    db.open("abcd");
    db.close();

}