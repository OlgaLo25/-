#include "login.h"

login::login()
{
    this->check = checker();
}

string login::correctUserName(vector<User> &allUsers)
{
    int choice;
    string login;
    cout << "Enter the username" << endl;
    cin >> login;
    bool userNameExistsFirstTry = check.checkUserName(login, allUsers);
    if (userNameExistsFirstTry == true)
    {
        return login;
    }

    while (true)
    {
        cout << "There is no such username\nEnter 1 to choose another username\nEnter 0 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the username" << endl;
            cin >> login;
            bool userNameExists = check.checkUserName(login, allUsers);
            if (userNameExists == true)
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

string login::correctPassword(string username, vector<User> &allUsers)
{
    int choice;
    string password;
    cout << "Enter your password" << endl;
    cin >> password;
    bool userPasswordExists = check.checkPassword(username, password, allUsers);
    if (userPasswordExists == true)
    {
        return password;
    }
    else
    {
        while (true)
        {
            cout << "Incorrect password \nEnter 1 to reenter password\nEnter 0 to exit" << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "Enter the password" << endl;
                cin >> password;
                bool userPasswordExists = check.checkPassword(username, password, allUsers);
                if (userPasswordExists == true)
                {
                    return password;
                }
            }
            else if (choice == 0)
            {
                return "";
            }
        }
    }
}

bool login::userLogin(vector<User> &allUsers)
{
    string username = correctUserName(allUsers);
    if(username==""){
        return false;
    }
    string password = correctPassword(username,allUsers);
    if(password==""){
        return false;
    }
    cout<<"Successfully logged in"<<endl;
    return true;
   
}