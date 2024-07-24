#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fill_rand_matrix(vector<vector<int>>&, int);
int max_sum_of_rows(vector<vector<int>>&, int);
int row_sum(vector<int>&, int);

int main()
{
	setlocale(LC_ALL, "ru");

	int size;

	cout << "Задайте размер матрицы:" << endl;
	cin >> size;

	vector<vector<int>> matrix(size, vector<int>(size, 0));
	fill_rand_matrix(matrix, size);

	cout << "Строка с наибольшей суммой - " << max_sum_of_rows(matrix, size);

}

void fill_rand_matrix(vector<vector<int>>& matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[j][i] = rand();
			(matrix[j][i] % 2) == 0 ? matrix[j][i] + 1 : 1 + 1;
		}
	}
}

int max_sum_of_rows(vector<vector<int>>& matrix, int size)
{
	int sum, max_sum = 0,j=0, row = 0;
	for (int i = 0; i < size; i++)
	{
		sum = row_sum(matrix[i],size);
		if(sum > max_sum)
		{
			max_sum = sum;
			row = i;
		} 
	}

	return row;
}

int row_sum(vector<int>& array, int size)
{
	int sum = 0;
	for (int j = 0; j < size; j++)
	{
		sum += abs(array[j]);
	}
	return sum;
}