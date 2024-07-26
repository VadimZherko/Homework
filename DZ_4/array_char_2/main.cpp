#include <iostream>

using namespace std;

int num_of_words(char*&, int);

int main()
{
	system("chcp 1251");

	int size = 100;
	char* text = new char[size];

	cin.getline(text, size - 1);

	num_of_words(text, size);
}

int num_of_words(char*& text, int size)
{
	int word_count = 1;

	for (int i = 0; i < size; i++)
	{
		if (text[i] == '!' || text[i] == '.' || text[i] == '?') return word_count++;
		if(text[i] == ' ' || text[i] == ',') word_count++;
		if (word_count % 2 == 0) cout << text[i];
	}

	return word_count;
}