#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

bool is_full_square(int);
bool is_odd(int);
bool is_power_of_two(int);
bool is_divisiblee_by_three(int);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size, sum1 = 0, sum2 = 0, sum3 = 0;

	cout << "Введите число элементов в массиве" << endl;
	cin >> size;

	int* array = new int[size];


	for (int i = 1; i <= size; i++)
	{
		array[i] = rand();

		if (is_odd(array[i]) == 1 && is_full_square(i)) { sum1 += array[i]; }
		if (is_odd(i) == 0 && is_power_of_two(array[i])) { sum2 += array[i]; }
		if (is_odd(array[i]) == 0 && is_divisiblee_by_three(i) == 1) { sum3 += array[i]; }
	}
 
	cout << "Первая сумма: " << sum1 << endl;
	cout << "Вторая сумма: " << sum2 << endl;
	cout << "Треться сумма:" << sum3 << endl;

	delete[] array;
}

bool is_full_square(int number)
{
	if (pow((trunc(sqrt(number))), 2) == number ) { return 1 ;}
	else { return 0; }
}

bool is_odd(int number)
{
	if (number % 2 == 0) { return 0; }
	else { return 1; }
}

bool is_power_of_two(int number)
{
	double a = (double)number;

	for (; a >= 1; a = a / 2)
	{
		if (a == 1) {
			return 1;
		}
	}
	
	return 0;
}

bool is_divisiblee_by_three(int number)
{
	if (number % 3 == 0) { return 1; }
	else return 0;
}