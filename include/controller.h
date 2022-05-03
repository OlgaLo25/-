#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "database.h"
#include "login.h"
#include "registration.h"

class controller{

private:

    vector<User> allUsers;
    database dbase;
    login loginUser;
    registration registrationUser;

    void registrationStatus();

public:
    controller(); 
    void commands();
};


#endif

