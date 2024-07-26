#include <iostream>

using namespace std;

void output_text(char*&, int);

int main()
{
	system("chcp 1251");
	
	int size = 100;
	char* text = new char[size] {' '};

	cout << "Введите текст" << endl;
	cin.getline(text, size - 1);
	system("CLS");
	output_text(text, size);

	delete text;
}

void input_text(char*& text, int size)
{
	for (int i = 0; i < size; i++) cin >> text[i];
}

void output_text(char*& text, int size)
{
	int num_sen = 0;

	for (int i = 0; i < size; i++)
	{
		if (!(text[i] == '!' || text[i] == '.' || text[i] == '?'))cout << text[i];
		else
		{
			num_sen++;
			cout << text[i];
			getchar();
		}
	}
	cout << "Количество предложений в тексте: " << num_sen;
}