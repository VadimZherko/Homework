#include <iostream>
#include <string>

using namespace std;

int number_of_words(string);
void print_word(string, int, int);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	string text;

	cout << "Введите текст" << endl;
	getline(cin, text);
	system("cls");

	cout << "Количество слов в первом предложении: " << number_of_words(text);
}

int number_of_words(string h)
{
	int first_symbol = 0, words = 0;
	
	for (int i = 0; i <= h.size(); i++)
	{
		switch (h[i])
		{
		case ' ':
			{
			/*first_symbol = i + 1; мир стол стул люди*/
			words += 1;
			words % 2 == 1 ? first_symbol = i + 1 : 1+1 ;

			if ((words % 2) == 0)
			{
				print_word(h, first_symbol, i - 1);
			}
			}
			break;
		case '.':
		{
			words += 1;
			if ((words % 2) == 0)
			{
				print_word(h, first_symbol, i - 1);
			}
			i = 1000;
		}
		break;
		}
	}
	return words;
}

void print_word(string h, int first_symbol, int lust_symbol)
{
	for (; first_symbol <= lust_symbol; first_symbol++) cout << h[first_symbol];
	cout << " ";
}