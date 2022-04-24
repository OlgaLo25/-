#include "registration.h"

bool registration::checkUser(User user,vector<User> &allUsers)
{
    for (int i = 0; i < allUsers.size(); i++)
    {
        if (allUsers[i].login == user.login)
        {
            cout<< "The user exists" <<endl;
            return false;
        }
    }
    return true;
}

// void registration ::addUser(User user){
//     if(checkUser(user)==true){
//         allUsers.push_back(user);
//     }
// }

