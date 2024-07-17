#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const double I = 0.1, a = 2.3, change_x = 0.2;
	double x0 = 0.2, xn = 2.8, x = x0;
	int r = 0;

	cout << "Выберите какой цикл использовать:\n1.While\n2.do while\n3.for" << endl;
	cin >> r;

	switch (r)
	{
	case 1:
	{
		while (x >= x0 && x <= xn)
		{
			x = x + I * change_x;

			if (x < 1) { cout << 1.5 * pow(cos(x), 2) << endl; }
			else if (x == 1) { cout << 1.8 * a * x << endl; }
			else if (1 < x < 2) { cout << pow((x - 2), 2) + 6 << endl; }
			else cout << 3 * tan(x);
		}
	}
	break;
	case 2:
	{
		do{
			x = x + I * change_x;

			if (x < 1) { cout << 1.5 * pow(cos(x), 2) << endl; }
			else if (x == 1) { cout << 1.8 * a * x << endl; }
			else if (1 < x < 2) { cout << pow((x - 2), 2) + 6 << endl; }
			else cout << 3 * tan(x) << endl;
		} while (x >= x0 && x <= xn);
	}
	break;
	case 3:
	{
		for (x; x >= x0 && x <= xn; x = x + I * change_x)
		{
			if (x < 1) { cout << 1.5 * pow(cos(x), 2) << endl; }
			else if (x == 1) { cout << 1.8 * a * x << endl; }
			else if (1 < x < 2) { cout << pow((x - 2), 2) + 6 << endl; }
			else cout << 3 * tan(x) << endl;
		}
	}
	break;
	case 4: { cout << "Что-то не так с циферками"; }
	}	
}