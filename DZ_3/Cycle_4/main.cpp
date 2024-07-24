#include <iostream>
#include <ctime>

using namespace std;

int* create_array(int);
void fill_array(int*, int);
void sort(int*, int);
int number_sum(int*, int);
void bubbleSort(int*, int);
void print_array(int*, int);

int main()
{
	int size;
	int* array;

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	size = rand() % 100;
	array = create_array(size);
	fill_array(array, size);
	bubbleSort(array, size);
	print_array(array, size);
	
	delete array;
}

int* create_array(int size)
{
	int* array = new int[size];
	return array;
}

void fill_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 1000;
	}
}

int number_sum(int* array, int number)
{
	int sum = 0, n = array[number];
	
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

void bubbleSort(int* array, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}

}

void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}