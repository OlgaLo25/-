#ifndef UTILS_H
#define UTILS_H
#include <sstream>
#include <vector>
#include <string>
using namespace std;

//Common functions
vector<string> split(string s, char delim);

string intToString(int number);

template <typename Text, typename TypeToConvert>
void stringToSomething(Text stringText, TypeToConvert &typeConvert)
{
    stringstream toSmth(stringText);
    toSmth >> typeConvert;
}
#endif