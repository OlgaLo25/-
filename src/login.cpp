#include "login.h"

// login::login(checker &check)
// {
//     this->check = check;
// }

bool login::userLogin(checker &check,vector<User> &allUsers)
{
    string username, password;
    cout << "Enter your username" << endl;
    cin >> username;
    bool userNameExists = check.checkUserName(username, allUsers);
    if (userNameExists == true)
    {
        cout << "Enter your password" << endl;
        cin >> password;
        bool userPasswordExists = check.checkPassword(username,password, allUsers);
        if(userPasswordExists==true){
            cout<<"Successfully logged in"<<endl;
            return true;
        }
        cout<<"Wrong password"<<endl;
        return false;
    }
    cout << "There is no such user" << endl;
    return false;
}