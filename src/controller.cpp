#include "controller.h"

controller::controller()
{
    this->loginUser = login();
    this->dbase = database();
    this->registrationUser = registration();
    allUsers = this->dbase.readData();
}

void controller::commands()
{
    cout << "Enter 1 for registration\nEnter 2 to login\nEnter 0 for exit" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        registrationStatus();
    }
    else if (choice == 2)
    {
        loginUser.userLogin(allUsers);
    }
    else
    {
        return;
    }
}

void controller::registrationStatus()
{
    User user;
    bool isRegistered = registrationUser.registrationUser(user, allUsers);
    if (isRegistered)
    {
        allUsers.push_back(user);
        dbase.writeData(allUsers);
        cout << "Successfully registered" << endl;
    }
    else
    {
        cout << "Try again" << endl;
    }
}
