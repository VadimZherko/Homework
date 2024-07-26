#include <iostream>

using namespace std;

void word(char*&, int);

int main()
{
	system("chcp 1251");

	int size = 100;
	char* text = new char[size];

	cout << "Ââåäèòå òåêñò" << endl;
	cin.getline(text,size-1);

	cout << "Êîëè÷åñòâî ñëîâ | Êîëè÷åñòâî áóêâ" << endl;
	word(text,size);

	delete text;
}

void word(char*& text, int size_text)
{
	int size = 8, lust_spacebar = 0;
	int* array = new int[size] {0};

	for (int i = 0; i <= size; i++)
	{
		array[i] = 0;
	}

	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == ' ' || text[i] == '!' || text[i] == ',' || text[i] == '?' || text[i] == '.')
		{
			array[i - lust_spacebar]++;
			lust_spacebar = i + 1;
		}
	}

	for (int i = 1; i <= sizeof(array); i++)
	{
		cout << i << '|' << array[i] << endl;
	}
}
