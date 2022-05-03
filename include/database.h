#ifndef DATABASE_H
#define DATABASE_H
#include "utils.h"
#include "structures.h"
#include <fstream>

class database{
public:
    vector<User> readData();
    void writeData(vector<User> &allUsers);
};

#endif