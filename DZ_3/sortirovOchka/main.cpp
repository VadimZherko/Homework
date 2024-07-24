#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fill_array(vector<int>&, int);
void bubble_sort(vector<int>&, int);
void quickSort(vector<int>&, int);
//void fill_array(vector<int>&, int);
void print_array(vector<int>, int);

int main()
{
	setlocale(LC_ALL, "ru");
	
	int size;
	cout << "������� ������ ������� ";
	cin >> size;

	vector<int> array(size, 0);
	fill_array(array, size);
	cout << "����������� ������: ";
	print_array(array, size);
	cout << endl;
	/*bubble_sort(array, size);*/
	quickSort(array, size);
	print_array(array, size);
}

void print_array(vector<int> array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
}

void fill_array(vector<int>& array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand();
	}
}

void bubble_sort(vector<int>&array,int size)
{
	int count = 0, num_iter = 0, start_size = size;
	
	for (; size != 1; size--)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (array[j] > array[j + 1]) swap(array[j],array[j+1]);
			count++;
		}
		num_iter++;
	}
	cout << "��������������� ������: ";
	print_array(array, start_size);
	cout << "\n���������� ��������: " << num_iter << endl;
	cout << "���������� ���������: " << count << endl;
}

void quickSort(vector<int>& array, int low, int high)
{


}