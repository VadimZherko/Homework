#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> words_erase(string);
void sort_words(string*);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");
	system("CLS");

	string text;

	cout << "¬ведите текс" << endl;
	getline(cin, text);

	vector<string>words(200);words = words_erase(text);
	
	sort(words.begin(), words.end());

	for(int i = 0;i<words.size();i++)
	{
		cout << words[i] << endl;
	}
}

vector<string> words_erase(string text)
{
	vector<string>word(10);
	int a = 0;

	for (int i = 0; i <= text.size(); i++)
	{
		if (text[i] == ' ' || text[i] == '!' || text[i] == ',' || text[i] == '?' || text[i] == '.')
		{
			word[a++] = text.substr(0,i);
			text.erase(0, i + 1);
			i = -1;
		}
	}
	return word;
}

void sort_word(string* words)
{
	for (int i = 0; i <= sizeof(words); i++)
	{
		
	}
}