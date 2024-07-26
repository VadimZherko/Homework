#include <iostream>
#include <vector>

using namespace std;

int**& new_matrix(int**&, int);
void print_matrix(int**&, int);
int** create_matrix(int);

int main()
{
	setlocale(LC_ALL, "ru");

	int size;

	cout << "¬ведите размер массива " << endl;
	cin >> size;

	int** matrix = create_matrix(size);
	cout << "¬ведите значени€ массива" << endl;
	matrix = new_matrix(matrix, size);

	print_matrix(matrix, size - 1);

}

int**& new_matrix(int**& matrix, int size)
{
	double max = matrix[0][0];
	int raw = 0, col = 0;
	int** new_matrix = create_matrix(size-1);


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];

			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				raw = i;
				col = j;
			}
		}
	}
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == raw) continue;
		for (int j = 0; j < size; j++)
		{
			if (j == col) continue;
			new_matrix[i][j] = matrix[i][j];
		}
	}
	
	return new_matrix;
}

void print_matrix(int**& array, int size)
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

int** create_matrix(int size)
{
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) matrix[i] = new int[size];
	return matrix;
}