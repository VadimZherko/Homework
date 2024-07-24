#include <iostream>
#include <string>

using namespace std;

int number_of_sentence(string);
void print_sentence(string, int, int);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	int a;
	string text;

	getline(cin, text);
	system("CLS");
	cout << "Для вывода предложений нажмите любую клавишу.";
	cout << "\nКоличество предложений в тексте: " << number_of_sentence(text);
	
}

int number_of_sentence(string h)
{
	int sum = 0,a = 0;
	
	for (int i = 0; i <= h.size(); i++)
	{
		if (h[i] == '.' || h[i] == '?' || h[i] == '!')
		{
			getchar();
			print_sentence(h,a,i);
			sum += 1;
			a = i + 1;
		}
	}
	return sum;
}

void print_sentence(string h, int first_index,int lust_index)
{
	
	for (; first_index <= lust_index; first_index++) cout << h[first_index];
}