#include <iostream>
#include <vector>

using namespace std;

void fill_array(vector<vector<int>> & array, int);
void print_array(vector<vector<int>>& array, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int size;

	cout << "¬ведите размер матрицы" << endl;
	cin >> size;
	system("CLS");

	vector<vector<int>> array(size,vector<int>(size));
	fill_array(array, size);
	print_array(array,size);
}

void fill_array(vector<vector<int>> & array, int size)
{
	int number = 1, j = 0, a;

	for (int i = 0; i <= size && j < size; i++)
	{
		a = j % 2;
		a == 0 ? array[i][j] = number++ : array[i][j] = number--;

		if (i == (size - 1))
		{
			i = -1;
			j++;
			a == 0 ? number = number + size-1 : number = number + size + 1;
		}
	}
}

void print_array(vector<vector<int>>& array, int size)
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
