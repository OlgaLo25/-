#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "structures.h"
#include <vector>
#include <iostream>
using namespace std;


class registration
{

public:
    // void addUser(User user);
    bool checkUser(User user,vector<User> &allUsers);
};

#endif