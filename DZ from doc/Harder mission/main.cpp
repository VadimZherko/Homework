#include <iostream>
#include <cmath>

using namespace std;

bool square(double, double);
bool rhomb(double, double);
bool circle(double, double);
bool triangle(double, double);

int main()
{
	setlocale(LC_ALL, "ru");

	double x, y;
	bool result;
	
	cout << "������� ���������� �����.";
	cin >> x >> y;

	cout << "����������� �� ����� ����������� ��������� ������� 1?" << endl;
	result = square(x, y);
	result == 1 ? cout << "�����������" << endl :  cout << "�� �����������" << endl;
	
	cout << "����������� �� ����� ����������� ��������� ������� 2?" << endl;
	result = rhomb(x, y);
	result == 1 ? cout << "�����������" << endl : cout << "�� �����������" << endl;

	cout << "����������� �� ����� ����������� ��������� ������� 3?" << endl;
	result = circle(x, y);
	result == 1 ? cout << "�����������" << endl : cout << "�� �����������" << endl;

	cout << "����������� �� ����� ����������� ��������� ������� 4?" << endl;
	result = rhomb(x, y);
	result == 1 ? cout << "�����������" << endl : cout << "�� �����������" << endl;



}

bool square(double x, double y)
{
	
	if (((x >= -1 && x <= 1) && (y == 1 || y == -1)) || ((x == 1 || x == -1) && (y >= -1 && y <= 1))) 
	{ return 1; }
	else return 0;

}

bool rhomb(double x, double y)
{
	if (y <= 1 - x) { return 1; }
	else return 0;
}

bool triangle(double x, double y)
{
	if (y <= 0,5*x && x<=2 && x>=0  ) { return 1; }
	else return 0;
}

bool circle(double x, double y)
{
	if (sqrt(pow(x, 2) + pow(y, 2)) <= 1)
	{
		if (((x > -1 || x < 1) && (y > -1 || y < 1))) { return 0; }
		else return 1;
	}
	else return 0;
}