#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int a, b, c, d;

	cout << "������� ��������� ��������� ������" << endl;
	cin >> a >> b;
	cout << "������� ��������� ������ ��� ���" << endl;
	cin >> c >> d;

	if (abs(a-c) == abs(b-d)) { cout << "���� ������ ������" << endl; }
	else { cout << "���� �� ������ ������" << endl; };

	if (double(sqrt(pow(a-c,2) + pow(b-d,2))) ==  sqrt(5))
	{
		cout << "���� ������ ������" << endl;
	}
	else cout << "���� �� ������ ������ ������" << endl;

	if (a == c || b == d) { cout << "����� ������ ������" << endl; }
	else { cout << "����� �� ������ ������ ������" << endl; };

	if (a == c || b == d || (abs(a - c) == abs(b - d))) { cout << "����� ������ ������" << endl; }
	else { cout << "����� �� ������ ������ ������" << endl; };

}