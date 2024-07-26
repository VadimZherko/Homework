#include <iostream>

using namespace std;

void alphabetical_sort(char*&, int);

int main()
{
	system("chcp 1251");
	
	int size = 100;
	char* text = new char(size);
	cout << "¬ведите текст" << endl;
	cin.getline(text,size-1);

	alphabetical_sort(text, size);
}

//-32'a',-32'б'...
void alphabetical_sort(char*& text, int size)
{
	int* i_first_letter = new int(200);
	i_first_letter[0] = text[0];
	for (int j = -33; j <= 0; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (text[i] == ' ' || text[i] == '!' || text[i] == ',' || text[i] == '?' || text[i] == '.')
			{
				text[i+1] = 11101  

			}
		}
	}
	
}