#include <iostream>
#include <string>

using namespace std;

void rev_sentence(string);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	string text;

	cout << "¬ведите текст." << endl;
	getline(cin, text);

	rev_sentence(text);
}

void rev_sentence(string text)
{
	int count_sen = 0;
	for (int i = 0; i <= text.size(); i++)
	{
		text[i] == '.' ? count_sen++ : 1 + 1;
		if (count_sen == 3) text.erase(i);
	}

	for (int i = text.size(); i >= 0; i--) cout << text[i];
}