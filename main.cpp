#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void zadanie0();
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int numberOfLesson;
	
	cout << "Список заданий:\n";
	cout << "\tЗадание 0 \n\t\tПрименение Espace-последовательностей \n";
	cout << "\tЗадание 1 \n\t\tОператоры. Арифметические операции с числами. \n";
	cout << "\tЗадание 2 \n\t\tIf else. Конструкция логического выбора if. Лесенка if - else if. \n";
	cout << "\tЗадание 3 \n\t\tSwitch. Калькулятор. Меню. Домашнее задание. \n";
	cout << "\tЗадание 4 \n\t\tВывод линии. \n";
	cout << "\tЗадание 5 \n\t\tСумма всех нечетных чисел в диапозоне. \n";
	cout << "\tЗадание 6 \n\t\tВложенная конструкция. Вложенный цикл. \n";
	cout << "\tЗадание 7 \n\t\tЗаполнить массив случайными числами. Генератор уникальных случайных чисел. \n\t\tВывод минимального числа \n";
	cout << "\nВыберите, какое задание включить,введя его номер:\n";

	cin >> numberOfLesson;
	system("cls");

	switch (numberOfLesson){
	case 0: zadanie0();
		break;
	case 1: zadanie1();
		break;
	case 2: zadanie2();
		break;
	case 3: zadanie3();
		break;
	case 4:zadanie4();
		break;
	case 5: zadanie5();
		break;
	case 6: zadanie6();
		break;
	case 7: zadanie7();
		break;
	default:
		cout << "Ты по-моему перепутал." << endl;
		break;
	}
	return 0;
}

//Задание 0 заключается в подключении локализации русского языка,
//Выводе какого-либо стиха, используя Escape-последовательности.

void zadanie0()
{
	cout << "\tСергей Есение - Ветер веет с Юга\n\n";
	cout << "\t\tВетер веет с юга\n\t\tИ луна взошла,\n\t\tЧто же ты, блядюга,\n\t\tНочью не пришла?\n\n";
	cout << "\t\tНе пришла ты ночью,\n\t\tНе явиалсь днем.\n\t\tДумаешь, мы дрочим?\n\t\tНет!Других ебём!\n";
}

//Введите три числа и выведите на экран значение суммы, произведения и среднее арифметическое этих чисел.

void zadanie1()
{
	int number1, number2, number3;

	cout << "Введите три числа:\n";
	cin >> number1 >> number2 >> number3;
	cout << endl;

	cout << "Сумма трех чисел: " << number1 + number2 + number3 << endl;
	cout << "Произведение трех чисел: " << number1 * number2 * number3 << endl;
	cout << "Среднее арифметическое трёх чисел: " << (double)(number1 + number2 + number3) / 3 << endl;
}

//Напишите программу, проверяющую число, введенное с клавиатуры на четность. 

void zadanie2()
{
	int number;

	cout << "Введите число для проверки на четность" << endl;
	cin >> number;
	cout << endl;

	if ((number % 2) == 0) {
		cout << "Введенное число является четным" << endl;
	}
	else {
		cout << "Введенное число является нечетным" << endl;
	}
}

/*Написать простой калькулятор. Пользователь вводит значение двух переменных. 
Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. 
Через оператор switch реализовать математическую операцию соответствующую пункту меню.*/

void zadanie3()
{
	int number1, number2, operation;
	
	cout << "Введите два числа:" << endl;
	cin >> number1 >> number2;
	system("cls");

	cout << "Список операций:\n\t1.Сложение\n\t2.Вычитание\n\t3.Умножение\n\t4.Деление" << endl;
	cout << "Выберите операцию, которая будет выполнена над числами:" << endl;
	cin >> operation;
	system("cls");
	
	switch (operation){
	case 1:
		cout << "Результат сложения: " << number1 + number2 << endl;
		break;
	case 2:
		cout << "Результат вычитания: " << number1 - number2 << endl;
		break;
	case 3:
		cout << "Результат умножения: " << number1 * number2 << endl;
		break;
	case 4:
		cout << "Результат деления: " << (float)number1 / number2 << endl;
		break;
	default:
		cout << "Ошибка! Я такого не умею:( " << endl;
		break;
	}
}

/*Разработать программу, которая выводит на экран линию из символов. 
Число символов, какой использовать символ, и какая будет линия - вертикальная, 
или горизонтальная - указывает пользователь. */

void zadanie4()
{
	int characters, i = 1;
	char symbol, line;

	cout << "Программа изображает линию. Задайте количество символов." << endl;
	cin >> characters;
	cout << "Укажите какой символ использовать для построения линии." << endl;
	cin >> symbol;
	cout << "Какая будет линия ? Введите H, если горизонтальная, или v - если вертикальная." << endl;
	cin >> line;
	system("cls");

	if (line == 'H' || line == 'h') {
		while (i <= characters)
		{
			cout << symbol;
			++i;
		}
	}
	else if (line == 'V' || line == 'v') {
		while (i <= characters)
		{
			cout << symbol << endl;
			++i;
		}
	}
	else cout << "Некорректный тип линии ^_^";
}

/*Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.*/

void zadanie5()
{
	int number1, number2, sum = 0;
	
	cout << "Введите первое и последнее число в диапозоне, в котором будет рассчитана сумма всех нечетных чисел:" 
		 << endl;
	cin >> number1 >> number2;

	while (number1 != number2)
	{
		++number1;
		if (number1 % 2 != 0)
		{
			sum += number1;
		}
	}

	cout << "\nСумма всех нечетных числе в диапозоне равна: " << sum << endl;
}

//Написать программу, которая выводит на экран прямоугольник символом *. 
// Высота и ширина задаётся пользователем.

void zadanie6()
{
	int height, width;

	cout << "Задайте высоту и ширину прямоугольника, который будет изображен." << endl;
	cin >> height >> width;
	system("cls");

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

//Заполнить массив из 10 символов случайными уникальными числами и вывести минимальное.

void zadanie7()
{
	int number, minimal;
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		for (int j = 0; (j < i); j++)
		{
			if (arr[j] == arr[i])
			{
				arr[i] = rand() % 100;
				j = -1;//Обнуление для перезапуска проверок 
			}
		}
		cout << arr[i] << endl;
	}

	minimal = arr[0];

	//Поиск минимального числа

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < minimal)
		{
			minimal = arr[i];
		} 
	}
	cout << endl  << minimal;
}

