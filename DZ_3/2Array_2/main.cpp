#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void fill_rand_array(vector<vector<T>> &, int);
template <typename T>
void new_matrix(vector<vector<T>>, int, int);
template <typename T>
void print_matrix(vector<vector<T>>, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int half_size, size;

	cout << "Задайте размер блока матрицы";
	cin >> half_size;
	size = 2 * half_size;

	vector<vector<int>>array(size, vector<int>(size, 0));
	fill_rand_array(array, size);
	
	cout << "Изначальная матрица:" << endl;
	print_matrix(array, size);

	new_matrix(array, size,half_size);
}

template <typename T>
void print_matrix(vector<vector<T>> array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl << endl;
	}
}

template <typename T>
void fill_rand_array(vector<vector<T>> & array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[j][i] = rand();
		}
	}
}

template <typename T>
void new_matrix(vector<vector<T>> array, int size,int half_size)
{
	vector<vector<int>> matrix(size, vector<int>(size,0));
	//перемещение верхнего левого
	for (int i = 0; i < half_size; i++)
	{
		for(int j = 0;j < half_size; j++)
		matrix[i][half_size + j] = array[i][j];
	}
	//перемещение верхнего правого
	for (int i = 0; i < half_size; i++)
	{
		for (int j = half_size; j < size; j++)
			matrix[i+half_size][j] = array[i][j];
	}
	//перемещение нижнего правого
	for (int i = half_size; i < size; i++)
	{
		for (int j = half_size; j < size; j++)
			matrix[i][j-half_size] = array[i][j];
	}
	//перемещение нижнего левого
	for (int i = half_size; i < size; i++)
	{
		for (int j = 0; j < half_size; j++)
			matrix[i - half_size ][j] = array[i][j];
	}

	cout << endl << "Новая матрица:" << endl;;
	print_matrix(matrix,size);
}