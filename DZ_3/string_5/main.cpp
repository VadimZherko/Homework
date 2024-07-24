#include <iostream>
#include <string>

using namespace std;

void word(string);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	string text;

	cout << "Введите текст." << endl;
	getline(cin, text);

	cout << "Количество символов | Количество слов" << endl;
	word(text);
}

void word(string text)
{
	int size = 8;
	int* array = new int[size];
		
	for (int i = 0; i <= size; i++)
	{
		array[i] = 0;
	}

	for (int i = 0; i <= text.size(); i++)
	{
		if (text[i] == ' ' || text[i] == '!' || text[i] == ',' || text[i] == '?' || text[i] == '.')
		{
			array[i]++;
			text.erase(0, i+1);
			i = -1;
		}
	}

	for (int i = 1; i <= sizeof(array); i++ )
	{
		cout << i << '|' << array[i] << endl;
	}
}
