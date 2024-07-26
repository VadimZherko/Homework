#include <iostream>

using namespace std;

void bin(int);
void num_in_text(char*&, int);
void second_sentence(char*&, int);

int main()
{
	system("chcp 1251");

	int size = 100;
	char* text = new char[size];

	cout << "¬ведите текст" << endl;
	cin.getline(text, size - 1);
	
	num_in_text(text, size);
}

void num_in_text(char*& text, int size)
{
	char keys[] = "1234567890";
	int i = strcspn(text, keys), num = 0;
	for (; i < size; i++)
	{
		if (isdigit(text[i])) num = num * 10 + (int)text[i] - 48;
		else break;
	}

	bin(num);

	cout << endl << num;
}

void second_sentence(char*& text, int size)
{
	int start_sentence = 0, end_sentence = 0;
	for (int i = 0; i < size; i++)
	{
		if (text[i] == '!' || text[i] == '.' || text[i] == '?')
		{

			start_sentence == 0 ? start_sentence = i : end_sentence = i;
		}

		for (int i = 0; i < size && start_sentence <= end_sentence ; i++)
		{
			text[i] = text[start_sentence];
			start_sentence++;
		}
	}
}

void bin(int num)
{
	int size = 8;
	int* bin_num = new int[size]{0};

	for(int i = 0; num != 0; i++)
	{
		bin_num[i] = num % 2;
		num /= 2;
	}

	size--;
	for (; size != -1; size--) cout << bin_num[size];
}
