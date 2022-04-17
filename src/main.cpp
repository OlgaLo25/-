#include "numbers.h"
/*Создать класс Numbers:
Класс должен содержать переменную private numbersList , которая является листом (listOf(Integers))
-В классе должны быть публичные функции
	-insertNumbers() - заполнение листа numberList числами. Числа вводит юзер
	-findMaxAndMin() - функция должна вывести максимальное и минимальное число в листе
	-getOddNumbers() - функция должна вывести все простые числа в листе
	-deleteOddNumbers() - функция должна удалить все простые числа из листа и вывести сам лист
	-deleteNumber(number:Int) - функция должна удалить число , которое вводит юзер , только в том случае ,если число существует в листе
	-swapMaxMin() - функция должна поменять местами максимум и минимум листа.

В main:
У пользователя должен быть выбор.То есть программа должна печатать:
	"Введите 1 - для заполнения листа"
	"Введите 2 - для вывода максимума и минимума"
	"Введите 3 - для вывода простых чисел"
	"Введите 4 - для удаления простых чисел"
	"Введите 5 - для удаления числа"(Далее юзер должен ввести число и ты передаешь это число в функцию deleteNumber(number:Int))
	"Введите 6 - чтобы поменять максимум и минимум местами"
	"Введите 0 - для завешения программы"*/

int main()
{
	
	Numbers data=Numbers();
	cout << "Enter 1 - insert\n"
			"Enter 2 - max and min\n"
			"Enter 3 - odd numbers\n"
			"Enter 4 - delete odd numbers\n"
			"Enter 5 - delete number\n"
			"Enter 6 - swap max and min\n"
			"Enter 0 - exit\n"
		 << endl;


	while (true)
	{
		int choice;
		cin>>choice;
		if(choice==1){
			data.insertNumbers();
		}
		else if(choice==2){
			data.findMaxAndMin();
		}
		else if(choice==3){
			data.getOddNumbers();
		}
		else if(choice==4){
			data.deleteOddNumbers();
		}
		else if(choice==5){
			cout<<"Enter the number to delete"<<endl;
			int num;
			cin>>num;
			data.deleteNumber(num);
		}
		else if(choice==6){
			data.swapMaxMin();
		}
		else if(choice==0){
			break;
		}
	}

	return 0;
}