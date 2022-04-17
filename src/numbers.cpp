#include "numbers.h"

// Класс должен содержать переменную private numbersList , которая является листом (listOf(Integers))
// -В классе должны быть публичные функции
// 	-insertNumbers() - заполнение листа numberList числами. Числа вводит юзер
// 	-finint должна вывести максимальное и минимальное число в листе
// 	-getOddNumbers() - функция должна вывести все простые числа в листе
// 	-deleteOddNumbers() - функция должна удалить все простые числа из листа и вывести сам лист
// 	-deleteNumber(number:Int) - функция должна удалить число , которое вводит юзер , только в том случае ,если число существует в листе
// 	-swapMaxMin() - функция должна поменять местами максимум и минимум листа.

void Numbers::insertNumbers()
{
    int size, num;

    cout << "Enter the size of number's list" << endl;
    cin >> size;
    cout << "Enter the numbers" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        numbersList.push_back(num);
    }

    print();
};

void Numbers::print()
{
    for (int data : numbersList)
    {
        cout << data << "\t";
    }
    cout << endl;
};

int* Numbers::findMaxAndMin()
{
    int *array;
    int max = numbersList.at(0), min = numbersList.at(0);

    for (int i = 0; i < numbersList.size(); i++)
    {
        if (numbersList[i] < min)
        {
            min = numbersList[i];
        }
        if (numbersList[i] > max)
        {
            max = numbersList[i];
        }
    }
    cout << "The minimum valie is " << min << "\tThe maximum value is " << max << endl;
    array[0] = max;
    array[1] = min;

    return array;
};
void Numbers::getOddNumbers()
{
    cout << "the odd numbers" << endl;
    for (int i = 0; i < numbersList.size(); i++)
    {
        if (numbersList[i] % 2 == 0)
        {
            cout << numbersList[i] << "\t";
        }
    }
};
void Numbers::deleteOddNumbers()
{
    //[10 12 15 21] [12 15 21]
    vector<int>::iterator iter = numbersList.begin();
    for (iter; iter < numbersList.end(); iter++)
    {

        if (*iter % 2 == 0)
        {
            numbersList.erase(iter);
            iter--;
        }
    }
    print();
};
void Numbers::deleteNumber(int number)
{
    vector<int>::iterator iter = numbersList.begin();
    for (iter; iter < numbersList.end(); iter++)
    {

        if (*iter  == number)
        {
            numbersList.erase(iter);
            break;
        }
    }
    print();
};
void Numbers::swapMaxMin(){

    int *array = findMaxAndMin();
    int indexMax = 0;
    int indexMin = 0;
    // *array = array[0]
    // *(array + 1) = array[1]
   for (int i= 0; i<numbersList.size(); i++){
       
       if(numbersList[i]==array[0]){
           indexMax=i;
       }
       if(numbersList[i]==array[1]){
           indexMin=i;
       }

   }
   numbersList[indexMin] = array[0];
   numbersList[indexMax] = array[1];
   print();
};
