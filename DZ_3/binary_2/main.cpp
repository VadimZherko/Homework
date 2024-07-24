#include <iostream>

using namespace std;

int* bin(int, int);
int unbin(int*, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int n,i;
	const int SIZE = 9;

	cout << "¬ведите n и i" << endl;
	cin >> n >> i;

	int* array = bin(n, SIZE);

	array[8 - i] = 1;
	cout << "5-е задание: " << unbin(array, SIZE) << endl;

	array[8 - i] = 0;
	cout << "6-е задание: " << unbin(array, SIZE) << endl;

	if (array[8 - i] == array[8 - i]) array[8 - i] == 0 ? array[8 - i] = 1 : array[8 - i] = 0;
	cout << "7-е задание: " << unbin(array, SIZE);

	delete array;
}

int* bin(int number, int SIZE)
{
	int* array = new int[SIZE];

	for (int i = SIZE - 1; i >= 0; i--)
	{
		array[i] = number % 2;
		number /= 2;
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

