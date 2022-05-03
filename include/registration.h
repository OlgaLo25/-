#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "checker.h"
#include <iostream>
using namespace std;

class registration
{

private:
    checker check;
    string correctUserName(vector<User> &allUsers);
    string correctEmail(vector<User> &allUsers);
public:
    registration();
    bool registrationUser(User &user, vector<User> &allUsers);
};

#endif