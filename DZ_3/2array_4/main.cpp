#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void fill_rand_matrix(vector<vector<T>>&, int);
template <typename T>
void columns(vector<vector<T>>, int);
template <typename T>
bool even_col(vector<vector<T>>, int, int);
template <typename T>
void print_matrix(vector<vector<T>>&, int);
template <typename T>
bool simple_col(vector<vector<T>>, int);
template <typename T>
void sum_diag(vector<vector<T>>, int);
template <typename T>
int sum_row(vector<vector<T>>, int, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int size;

	cout << "Введите размер массива ";
	cin >> size;

	vector<vector<int>> matrix(size, vector<int>(size));

	fill_rand_matrix(matrix,size);
	print_matrix(matrix, size);
	columns(matrix, size);
	sum_diag(matrix, size);
}

template <typename T>
void fill_rand_matrix(vector<vector<T>>& matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[j][i] = -2 + (rand() % (10 - (-2) + 1));
			(matrix[j][i] % 2) == 0 ? matrix[j][i] + 1 : 1 + 1;
		}
	}
}

template <typename T>
void columns(vector<vector<T>> matrix, int size)
{
	vector<int>even_cols(size);
	int even = 0;

	cout << "Столбы, где все числа чётные: ";
	for (int i = 0; i < size; i++)
	{
		if (even_col(matrix, size, i) == true) cout << i << ' ';
	}

	cout << "Столбцы, где все числа простые: ";
}

template <typename T>
bool even_col(vector<vector<T>> matrix, int size, int col)
{
	int even = 0;

	for (int j = 0; j < size; j++)
	{
		(matrix[j][col] % 2) == 0 ? even++ : even = 0;
		if ((j = size - 1) && even == size) return true;
		else return false;
	}
}

template <typename T>
bool simple_col(vector<vector<T>> matrix, int size, int col)
{
	int simple = 0;

	for (int j = 0; j < size; j++)
	{
		matrix[j][col] == 2 ||  matrix[j][col] == 3 || matrix[j][col] == 5 || matrix[j][col] == 7 ? simple++ : simple = 0;
		if ((j = size - 1) && simple == size) return true;
		else return false;
	}
}

template <typename T>
void print_matrix(vector<vector<T>>& array, int size)
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
void sum_diag(vector<vector<T>> matrix, int size)
{
	int  j = 0;

	for (int i = 0; i < size; i++)
	{
		
		if (matrix[i][j] < 0)
		{
			cout << "Сумма строки " << i << ' ' << sum_row(matrix, size, i) << endl;
		}
		j++;
	}
}

template <typename T>
int sum_row(vector<vector<T>> matrix, int size, int i)
{
	int sum_row = 0;
	for (int j = 0; j < size; j++)
	{
		sum_row += matrix[i][j];
	}
	return sum_row;
}