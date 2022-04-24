#include "database.h"

vector<User> database::readData()
{
    vector<User> allUsers;
    ifstream in("../data/data.txt");
    if (in.is_open())
    {
        string line;
        while (getline(in, line))
        {
            vector<string> lineSplit = split(line, ' ');
            string firstName = lineSplit[0];
            string lastName = lineSplit[1];
            string login = lineSplit[2];
            string password = lineSplit[3];
            string email = lineSplit[4];

            int phoneNumber;
            stringToSomething<string, int>(lineSplit.at(5), phoneNumber);

            User user{firstName, lastName, login, password, email, phoneNumber};
            allUsers.push_back(user);
        }
    }
    in.close();
    return allUsers;
}

void database::writeData(vector<User> &allUsers)
{
    ofstream out("../data/data.txt");
    if (out.is_open())
    {
        for (int i = 0; i < allUsers.size(); i++)
        {
            string phoneNumber = intToString(allUsers[i].phoneNumber);
            string result = allUsers[i].firstName + " " + allUsers[i].lastName + " " + allUsers[i].login 
            + " " + allUsers[i].password + " " + allUsers[i].email + " " + phoneNumber + "\n";
            out << result;
        }
    }
    out.close();
}