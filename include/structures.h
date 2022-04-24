#ifndef STRUCTURES_H
#define STRUCTURES_H
using namespace std;
#include <string>

/*
ТЗ (что-то похожее на онлайн магазин):

1)При запуске программы юзер должен либо зарегистрироваться либо войти если он зареган:
  -Поля для регистрации (имя,фамилия,логин,пароль,почта,номер телефона)
  -Поля для входа (логин, пароль)
*/

struct User
{
  string firstName, lastName, login, password, email;
  int phoneNumber;
};
#endif