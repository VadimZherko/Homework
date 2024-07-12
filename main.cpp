#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void zadanie0();
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int numberOfLesson;
	
	cout << "������ �������:\n";
	cout << "\t������� 0 \n\t\t���������� Espace-������������������� \n";
	cout << "\t������� 1 \n\t\t���������. �������������� �������� � �������. \n";
	cout << "\t������� 2 \n\t\tIf else. ����������� ����������� ������ if. ������� if - else if. \n";
	cout << "\t������� 3 \n\t\tSwitch. �����������. ����. �������� �������. \n";
	cout << "\t������� 4 \n\t\t����� �����. \n";
	cout << "\t������� 5 \n\t\t����� ���� �������� ����� � ���������. \n";
	cout << "\t������� 6 \n\t\t��������� �����������. ��������� ����. \n";
	cout << "\t������� 7 \n\t\t��������� ������ ���������� �������. ��������� ���������� ��������� �����. \n\t\t����� ������������ ����� \n";
	cout << "\n��������, ����� ������� ��������,����� ��� �����:\n";

	cin >> numberOfLesson;
	system("cls");

	switch (numberOfLesson){
	case 0: zadanie0();
		break;
	case 1: zadanie1();
		break;
	case 2: zadanie2();
		break;
	case 3: zadanie3();
		break;
	case 4:zadanie4();
		break;
	case 5: zadanie5();
		break;
	case 6: zadanie6();
		break;
	case 7: zadanie7();
		break;
	default:
		cout << "�� ��-����� ���������." << endl;
		break;
	}
	return 0;
}

//������� 0 ����������� � ����������� ����������� �������� �����,
//������ ������-���� �����, ��������� Escape-������������������.

void zadanie0()
{
	cout << "\t������ ������ - ����� ���� � ���\n\n";
	cout << "\t\t����� ���� � ���\n\t\t� ���� ������,\n\t\t��� �� ��, �������,\n\t\t����� �� ������?\n\n";
	cout << "\t\t�� ������ �� �����,\n\t\t�� ������� ����.\n\t\t�������, �� ������?\n\t\t���!������ ���!\n";
}

//������� ��� ����� � �������� �� ����� �������� �����, ������������ � ������� �������������� ���� �����.

void zadanie1()
{
	int number1, number2, number3;

	cout << "������� ��� �����:\n";
	cin >> number1 >> number2 >> number3;
	cout << endl;

	cout << "����� ���� �����: " << number1 + number2 + number3 << endl;
	cout << "������������ ���� �����: " << number1 * number2 * number3 << endl;
	cout << "������� �������������� ��� �����: " << (double)(number1 + number2 + number3) / 3 << endl;
}

//�������� ���������, ����������� �����, ��������� � ���������� �� ��������. 

void zadanie2()
{
	int number;

	cout << "������� ����� ��� �������� �� ��������" << endl;
	cin >> number;
	cout << endl;

	if ((number % 2) == 0) {
		cout << "��������� ����� �������� ������" << endl;
	}
	else {
		cout << "��������� ����� �������� ��������" << endl;
	}
}

/*�������� ������� �����������. ������������ ������ �������� ���� ����������. 
������� ���� � ������� ��� �������������� �������� ��������, ���������, ���������, �������. 
����� �������� switch ����������� �������������� �������� ��������������� ������ ����.*/

void zadanie3()
{
	int number1, number2, operation;
	
	cout << "������� ��� �����:" << endl;
	cin >> number1 >> number2;
	system("cls");

	cout << "������ ��������:\n\t1.��������\n\t2.���������\n\t3.���������\n\t4.�������" << endl;
	cout << "�������� ��������, ������� ����� ��������� ��� �������:" << endl;
	cin >> operation;
	system("cls");
	
	switch (operation){
	case 1:
		cout << "��������� ��������: " << number1 + number2 << endl;
		break;
	case 2:
		cout << "��������� ���������: " << number1 - number2 << endl;
		break;
	case 3:
		cout << "��������� ���������: " << number1 * number2 << endl;
		break;
	case 4:
		cout << "��������� �������: " << (float)number1 / number2 << endl;
		break;
	default:
		cout << "������! � ������ �� ����:( " << endl;
		break;
	}
}

/*����������� ���������, ������� ������� �� ����� ����� �� ��������. 
����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, 
��� �������������� - ��������� ������������. */

void zadanie4()
{
	int characters, i = 1;
	char symbol, line;

	cout << "��������� ���������� �����. ������� ���������� ��������." << endl;
	cin >> characters;
	cout << "������� ����� ������ ������������ ��� ���������� �����." << endl;
	cin >> symbol;
	cout << "����� ����� ����� ? ������� H, ���� ��������������, ��� v - ���� ������������." << endl;
	cin >> line;
	system("cls");

	if (line == 'H' || line == 'h') {
		while (i <= characters)
		{
			cout << symbol;
			++i;
		}
	}
	else if (line == 'V' || line == 'v') {
		while (i <= characters)
		{
			cout << symbol << endl;
			++i;
		}
	}
	else cout << "������������ ��� ����� ^_^";
}

/*�������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.*/

void zadanie5()
{
	int number1, number2, sum = 0;
	
	cout << "������� ������ � ��������� ����� � ���������, � ������� ����� ���������� ����� ���� �������� �����:" 
		 << endl;
	cin >> number1 >> number2;

	while (number1 != number2)
	{
		++number1;
		if (number1 % 2 != 0)
		{
			sum += number1;
		}
	}

	cout << "\n����� ���� �������� ����� � ��������� �����: " << sum << endl;
}

//�������� ���������, ������� ������� �� ����� ������������� �������� *. 
// ������ � ������ ������� �������������.

void zadanie6()
{
	int height, width;

	cout << "������� ������ � ������ ��������������, ������� ����� ���������." << endl;
	cin >> height >> width;
	system("cls");

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

//��������� ������ �� 10 �������� ���������� ����������� ������� � ������� �����������.

void zadanie7()
{
	int number, minimal;
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		for (int j = 0; (j < i); j++)
		{
			if (arr[j] == arr[i])
			{
				arr[i] = rand() % 100;
				j = -1;//��������� ��� ����������� �������� 
			}
		}
		cout << arr[i] << endl;
	}

	minimal = arr[0];

	//����� ������������ �����

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < minimal)
		{
			minimal = arr[i];
		} 
	}
	cout << endl  << minimal;
}

