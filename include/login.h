#ifndef LOGIN_H
#define LOGIN_H
#include "structures.h"
#include "checker.h"
#include <vector>
using namespace std;
#include <iostream>

class login
{

public:
    bool userLogin(checker &check, vector<User> &allUsers);
};
#endif