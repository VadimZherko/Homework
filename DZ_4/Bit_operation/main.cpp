#include <iostream>

using namespace std;

void bin(int);
void print_bin(int*,int);
int count_one(int);
int high_bit(int);

int main()
{
	setlocale(LC_ALL, "ru");

	int number_of_tusk = 0;
	cout << "Номер задания" << endl;
	cout << "1. Ввести целое число n и вывести 2n, используя битовые операции." << endl;
	cout << "2.Вывести двоичное представление целого положительного числа, используя битовые операции." << endl;
	cout << "3.Найти количество единиц в двоичном представлении целого положительного числа." << endl;
	cout << "4.Найти номер старшего бита в двоичном представлении целого положительного числа." << endl;
	cout << "5.Ввести целые числа n и i и вывести целое число, у которого i-й бит установлен в 1, \n  а все остальные биты совпадают с битами числа n на тех же позициях." << endl;
	cout << "6.Ввести целые числа n и i и вывести целое число, у которого i-й бит сброшен в 0,\n  а все остальные биты совпадают с битами числа n на тех же позициях." << endl;
	cout << "7.Ввести целые числа n и i и вывести целое число, у которого i -й бит отличается от i -го бита числа n , а все остальные биты совпадают с битами числа n на тех же позициях." << endl;
	cout << endl << "Выберить номер задания" << endl;
	cin >> number_of_tusk;

	switch (number_of_tusk)
	{
	case 1:
	{
		cout << "Введите число n" << endl;
		int number;
		cin >> number;
		cout << "2 * " << number << " = " << (number >> 1);
	}break;
	case 2:
	{
		cout << "Введите число n" << endl;
		int number;
		cin >> number;
		cout << "Двоичное представление числа ";
		bin(number);
	}break;
	case 3:
	{
		cout << "Введите число n" << endl;
		int number;
		cin >> number;
		cout << "Количество единиц в двоинчам представлении числа = " << count_one(number);
	}break;
	case 4:
	{
		cout << "Введите число n" << endl;
		int number;
		cin >> number;
		cout << "Позиция старшего бита = " << high_bit(number);
	}
	case 5:
	{
		int number = 0, i = 0;
		cout << "Введите число и позицию бита" << endl;
		cin >> number >> i;

		int i_bit = 1 << i;
		cout << "Результат выполнения: " << (number | i_bit);
	}break;
	case 6:
	{
		int number = 0, i = 0;
		cout << "Введите число и позицию бита" << endl;
		cin >> number >> i;

		int i_bit = ~(1 << i);
		cout << "Результат выполнения: " << (number & i_bit);
	}break;
	case 7:
	{
		int number = 0, i = 0;
		cout << "Введите число и позицию бита" << endl;
		cin >> number >> i;

		int i_bit =  1 << i;
		cout << "Результат выполнения: " << (number ^ i_bit);
	}break;
	default:
	{
		cout << "Я такого не умею." << endl;
	}

	}
}

void bin(int number)
{
	int size = 8,bit_i  = size - 1;
	int* bin = new int[size] {0};

	while(number > 0)
	{
		bin[bit_i--] = number % 2;
		number >>= 1;
	}

	print_bin(bin,size);
	delete bin;
}

void print_bin(int* bin, int size)
{
	for (int i = 0; i < size; i++) cout << bin[i];
}

int count_one(int number)
{
	int count = 0;
	while (number > 0)
	{
		number = number & (number - 1);
		count++;
	}
	return count;
}

int high_bit(int number)
{
	int position = -1;

	while (number > 0 ) 
	{
		number >>= 1;
		position++;
	}

	return position;
}