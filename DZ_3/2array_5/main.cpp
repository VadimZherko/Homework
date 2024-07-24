#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> new_matrix(vector<vector<double>>&, int);
void input_matrix(vector<vector<double>>&, int);
void print_matrix(vector<vector<double>>, int);

int main()
{
	int size;

	cout << "¬ведите размер массива ";
	cin >> size;

	vector<vector<double>>matrix(size, vector<double>(size));
	cout << "¬ведите значени€ массива";
	matrix = new_matrix(matrix, size);

	print_matrix(matrix, size - 1);

}

vector<vector<double>> new_matrix(vector<vector<double>>& matrix, int size)
{
	double max = matrix[0][0];
	int raw = 0, col = 0;
	vector<vector<double>> new_matrix(size - 1, vector<double>(size - 1));


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[j][i];

			if (matrix[j][i] > max)
			{
				max = matrix[j][i];
				raw = j;
				col = i;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if(i == raw || j == col) break;
			new_matrix[i][j] = matrix[i][j];
		}
	}

	return new_matrix;
}

void print_matrix(vector<vector<double>> array, int size)
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