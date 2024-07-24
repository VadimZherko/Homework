#include <iostream>
#include <string>

using namespace std;

int* bin(int);
int number_from_string(string);
string second_sentence(string);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	string text;

	cout << "¬ведите текст." << endl;
	getline(cin, text);

	text = second_sentence(text);
	int* bin_number = bin(number_from_string(text));
	for (int i = 0; i <= sizeof(bin_number); i++)cout << bin_number[i];
}

int number_from_string(string h)
{
	int number = 0;

	for (int i = 0; i < h.size(); i++)
	{
		if (isdigit(h[i])) number = number * 10 + (int)h[i] - 48;
		else break;
	}
	return number;
}

int* bin(int number)
{
	int* array = new int[9];

	for (int i = 8; i >= 0; i--)
	{
		array[i] = number % 2;
		number /= 2;
	}

	return array;
}

string second_sentence(string h)
{
	for (int i = 0; i < h.size(); i++)
	{
		if (h[i] == '.') h.erase(0, i+1);
	}
	return h;
}