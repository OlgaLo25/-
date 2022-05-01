#include "controller.h"

controller::controller()
{
    login loggedIn = login();
    checker checkUser = checker();
    database dbase = database();

    this->check = check;
    this->loggedIn = loggedIn;
    this->dbase = dbase;
    allUsers = this->dbase.readData();
}

void controller::commands()
{
    cout << "Enter 1 for registration\nEnter 2 to login\nEnter 0 for exit" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        addUser();
    }
    else if (choice == 2)
    {
        loginFunction();
    }
    else
    {
        return;
    }
}

string controller::correctUserName()
{
    int choice;
    string login;
    cout << "Enter the username" << endl;
    cin >> login;
    bool userNameExistsFirstTry = check.checkUserName(login, allUsers);
    if (userNameExistsFirstTry == false)
    {
        return login;
    }

    while (true)
    {
        cout << "The username is already exists\nEnter 1 to choose new username\nEnter 0 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the username" << endl;
            cin >> login;
            bool userNameExists = check.checkUserName(login, allUsers);
            if (userNameExists == false)
            {
                return login;
            }
        }
        else if (choice == 0)
        {
            return "";
        }
    }
}

string controller::correctEmail()
{
    int choice;
    string email;
    cout << "Enter the email" << endl;
    cin >> email;
    bool emailExistsFirstTry = check.checkEmail(email, allUsers);
    if (emailExistsFirstTry == false)
    {
        return email;
    }

    while (true)
    {
        cout << "The email is already exists\nEnter 1 to choose another email\nEnter 0 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the email" << endl;
            cin >> email;
            bool emailExist = check.checkEmail(email, allUsers);
            if (emailExist == false)
            {
                return email;
            }
        }
        else if (choice == 0)
        {
            return "";
        }
    }
}

void controller::addUser()
{
    string firstName, lastName, login, password, email;
    int phoneNumber;
    cout << "Enter the first name" << endl;
    cin >> firstName;
    cout << "Enter the last name" << endl;
    cin >> lastName;

    login = correctUserName();
    if (login == "")
    {
        return;
    }

    cout << "Enter password" << endl;
    cin >> password;

    email = correctEmail();
    if (login == "")
    {
        return;
    }

    cout << "Enter the phone number" << endl;
    cin >> phoneNumber;

    User user{firstName, lastName, login, password, email, phoneNumber};
    allUsers.push_back(user);
    dbase.writeData(allUsers);
}

bool controller::loginFunction()
{
    return loggedIn.userLogin(check, allUsers);
}