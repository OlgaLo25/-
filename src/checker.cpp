#include "checker.h"

bool checker::checkUserName(string username, vector<User> &allUser){

    for(int i=0; i< allUser.size(); i++){
        if(username==allUser[i].login){
            return true;
        }
    }
    return false;
}

bool checker::checkEmail(string email, vector<User> &allUser){

    for(int i=0; i< allUser.size(); i++){
        if(email==allUser[i].email){
            return true;
        }
    }
    return false;
}

bool checker::checkPassword(string username,string password, vector<User> &allUser){

    for(int i=0; i< allUser.size(); i++){
        if(password==allUser[i].password && username == allUser[i].login){
            return true;
        }
    }
    return false;
}