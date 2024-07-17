#include <iostream>
#include <time.h>

using namespace std;

void fill_random(int*, int);
int* create_array(int);
int* concenate_arrays(int*, int, int*, int);
int finde_min_max(int*);
int max(int*,int);
int min(int*,int);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size1, size2;

	cout << "Введите два числа, размеры массивов." << endl;
	cin >> size1 >> size2;

	
	int* array1 = new int [size1];
	int* array2 = new int[size2];
	
	fill_random(array1, size1);
	fill_random(array2, size2);

	int* mergedArray = concenate_arrays(array1, size1, array2, size2);

	cout << "Значения объединенного массива:" << endl;
	for (int i = 0; i <= (size1 + size2); i++)
	{
		cout << mergedArray[i] << endl;
	}

	cout << "Максимальное: "<< max(mergedArray,size1+size2) << endl;
	cout << "Минимальное: " << min(mergedArray,size1+size2) << endl;

	return 0;
}

void fill_random(int* array, int size)
{
	for (int i = 0; i <= size; i++)
	{
		array[i] = ((rand() % 1000)/10);
	}
}

int* concenate_arrays(int* array1, int size1, int* array2, int size2)
{
	int newSize = size1 + size2;
	int* mergedArray = new int[newSize];

	for (int i = 0; i <= size1; i++)
	{
		mergedArray[i] = array1[i];
	}
		
	for (int i = 0; i <= size2; i++)
	{
		mergedArray[size1 + i] = array2[i];
	}

	return mergedArray;
}

int min(int* array,int size)
{
	int min;
	min = array[0];

	for (int i = 0; i <= size; i++)
	{
		if (array[i] < min) {min = array[i]; }
	}

	return min;
}

int max(int* array,int size)
{
	int max;
	max = array[0];

	for (int i = 0; i <= size; i++)
	{
		if (array[i] > max) { max = array[i]; }
	}
	return max;
}