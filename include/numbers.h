#ifndef NUMBERS_H
#define NUMBERS_H
#include <vector>
#include <iostream>
using namespace std;

// Класс должен содержать переменную private numbersList , которая является листом (listOf(Integers))
// -В классе должны быть публичные функции
// 	-insertNumbers() - заполнение листа numberList числами. Числа вводит юзер
// 	-finint должна вывести максимальное и минимальное число в листе
// 	-getOddNumbers() - функция должна вывести все простые числа в листе
// 	-deleteOddNumbers() - функция должна удалить все простые числа из листа и вывести сам лист
// 	-deleteNumber(number:Int) - функция должна удалить число , которое вводит юзер , только в том случае ,если число существует в листе
// 	-swapMaxMin() - функция должна поменять местами максимум и минимум листа.

class Numbers
{
private:
    vector<int> numbersList;
//[0,1,2]
//int []array = {0,1,2}
// array[0] == array

public:
    void insertNumbers();
    int* findMaxAndMin();
    void getOddNumbers();
    void deleteOddNumbers();
    void deleteNumber(int number);
    void swapMaxMin();
    void print();
};
#endif