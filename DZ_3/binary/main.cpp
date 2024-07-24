#include <iostream>

using namespace std;

int* bin(int, int);
int* mult(int*, int);
int unbin(int*, int);
int quantity_of_one(int*, int);
int first_bit(int*, int);

int main()
{
	setlocale(LC_ALL, "ru");
	
	int number;
	const int SIZE = 9;
	
	cout << "Введите целое число" << endl;
	cin >> number;

	int* array = bin(number, SIZE);

	cout << "Двоичное представление числа:" << endl;
	for (int i = 0; i < SIZE; i++) cout << array[i];
	cout << "\nСтарший бит находится на позии под номером: " << first_bit(array, SIZE) << endl;
	cout << "\nКоличество единиц в двоичном представлении числа: " << quantity_of_one(array, SIZE) << endl;
	array = mult(array, SIZE);
	cout << "\nРезультат умножения числа на 2 равен: " << unbin(array, SIZE) << endl;
}

int* bin(int number, int SIZE)
{
	int* array = new int[SIZE];

	for (int i = SIZE - 1; i >= 0 ; i--)
	{
		array[i] = number % 2;
		number /= 2;
	}

	return array;
}

int* mult(int* array, int SIZE)
{
	if (array[0] == 1) cout << "Переполнение";

	for (int i = 0; i < SIZE - 1; i++)
	{
		if (array[i + 1] == 1)
		{
			array[i] = 1;
			array[i + 1] = 0;
		}
	}
	return array;
}

int unbin(int* array, int SIZE)
{
	int deg = 8;
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == 1) 
		{
			sum += pow(2, deg);
		}
		deg--;
	}
	return sum;
}

int quantity_of_one(int* array, int SIZE)
{
	int quantity = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == 1) quantity += 1;
	}

	return quantity;
}

int first_bit(int* array, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == 1)
		{
			return i;
			break;
		}
	}
}