#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "database.h"
#include "registration.h"

class controller{

private:
    vector<User> allUsers;
    database dbase;
    registration registerNew;

public:
    controller(database &dbase,registration &registerNew); 
    void addUser();
};


#endif

