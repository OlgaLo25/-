#ifndef CHECKER_H
#define CHECKER_H
#include "structures.h"
#include <vector>

class checker
{

public:
    bool checkUserName(string username,vector<User> &allUsers);
    bool checkEmail(string email,vector<User> &allUsers);
    bool checkPassword(string username,string password,vector<User> &allUsers);
};
#endif