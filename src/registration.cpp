#include "registration.h"

registration::registration(){
    this->check = checker();
}

string registration::correctUserName(vector<User> &allUsers)
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

string registration::correctEmail(vector<User> &allUsers)
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

bool registration::registrationUser(User &user, vector<User> &allUsers)
{
    string firstName, lastName, login, password, email;
    int phoneNumber;
    cout << "Enter the first name" << endl;
    cin >> firstName;
    cout << "Enter the last name" << endl;
    cin >> lastName;

    login = correctUserName(allUsers);
    if (login == "")
    {
        return false;
    }

    cout << "Enter password" << endl;
    cin >> password;

    email = correctEmail(allUsers);
    if (email == "")
    {
        return false;
    }

    cout << "Enter the phone number" << endl;
    cin >> phoneNumber;

    user = User{firstName, lastName, login, password, email, phoneNumber};
    return true;
}