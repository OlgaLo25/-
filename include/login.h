#ifndef LOGIN_H
#define LOGIN_H
#include "checker.h"
#include <iostream>
using namespace std;

class login
{
private:
    checker check;
    string correctUserName(vector<User> &allUsers);
    string correctPassword(string username,vector<User> &allUsers);
public:
    login();
    bool userLogin(vector<User> &allUsers);
};
#endif