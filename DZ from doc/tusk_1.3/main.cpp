#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int a, b, c, d;

	cout << "Введите начальное положение фигуры" << endl;
	cin >> a >> b;
	cout << "Введите положение фигуры для боя" << endl;
	cin >> c >> d;

	if (abs(a-c) == abs(b-d)) { cout << "Слон побьет фигуру" << endl; }
	else { cout << "Слон не побьет фиугур" << endl; };

	if (double(sqrt(pow(a-c,2) + pow(b-d,2))) ==  sqrt(5))
	{
		cout << "Конь побьет фигуру" << endl;
	}
	else cout << "Конь не сможет побить фигуру" << endl;

	if (a == c || b == d) { cout << "Ладья побьет фигуру" << endl; }
	else { cout << "Ладья не сможет побить фигуру" << endl; };

	if (a == c || b == d || (abs(a - c) == abs(b - d))) { cout << "Ферзь побьет фигуру" << endl; }
	else { cout << "Ферзь не сможет побить фигуру" << endl; };

}