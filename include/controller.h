#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "database.h"
#include "checker.h"
#include "login.h"

class controller{

private:
    vector<User> allUsers;
    database dbase;
    checker check;
    login loggedIn;

    bool loginFunction();
    void addUser();
    void update();
    string correctUserName();
    string correctEmail();
public:
    controller(); 
    void commands();
    
};


#endif

