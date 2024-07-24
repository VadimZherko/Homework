#include <iostream>

using namespace std;

void filling_array(int*, int);
int* create_array(int);
void check_input(int);
void min(int*, int);
int sum_between_min(int*, int);
bool last_and_first(int*, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int size, sum = 0;
	int* array;

	cout << "Введите количество элементов массива(Целое число)." << endl;
	cin >> size;
	check_input(size);

	array = create_array(size);
	filling_array(array, size);

	sum += sum_between_min(array, size);
	cout << sum;

	delete array;
}

void filling_array(int* array, int size)
{
	cout << "Введите значения для заполнения массива." << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

int* create_array(int size)
{
	int* array = new int[size];
	return array;
}

void check_input(int a)
{
	if (a == 0)
	{
		cout << "Некорректный ввод";
		exit(EXIT_SUCCESS);
	}
}

int sum_between_min(int* array, int  size)
{
	int min1 = 0, min2 = 1; 
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[min1] > array[i] && last_and_first(array,min1)) min1 = i;
	}

	for (int i = 0; i < size; i++)
	{
		if ((array[min2] > array[i]) && (i != min1) && last_and_first(array, min2)) min2 = i;
	}
	
	if (min1 < min2)
	{
		while (min1 < --min2)
		{
			sum += array[min2];
		}
	}
	else {
		while (--min1 > min2)
		{
			sum += array[min1];
		}
	}
	
	return sum;
}

bool last_and_first(int*array,int a)
{
	int n = array[a] / 100;

	if ((n == array[a] % 10) && (n != 0) ) return true;
	else return false;
}