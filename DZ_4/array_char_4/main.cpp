#include <iostream>

using namespace std;

void three_sentences(char*&, int);

int main()
{
	system("chcp 1251");
	
	int size = 100;
	char* text = new char[size];
	cout << "¬ведите текст" << endl;
	cin.getline(text, size - 1);

	three_sentences(text, size);

	delete text;
}

void three_sentences(char*& text, int size)
{
	int count = 0,i_sentence = 0;

	for (int i = 0; i < size; i++)
	{
		if (text[i] == '!' || text[i] == '.' || text[i] == '?')
		{
			count++;
			i_sentence = i;
			if (count == 3) break;
		}
	}

	for (; i_sentence != -1; i_sentence--) cout << text[i_sentence];
}