#ifndef DATABASE_H
#define DATABASE_H
#include "utils.h"
#include "structures.h"
// #include "constants.h"
#include <vector>
#include <fstream>
using namespace std;

class database{
public:
    vector<User> readData();
    void writeData(vector<User> &allUsers);
};

#endif