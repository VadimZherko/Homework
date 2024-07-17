#include <iostream>
#include <math.h>
using namespace std;

double min(double, double, double);
double min(double, double);
double max(double, double);
double max(double, double, double);
double change(double, double, double);

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z, t, t1, u;

	cout << "Введите три числа:x,y,z" << -2% 2 << endl;
	cin >> x >> y >> z;

	cout << "min(x , y , z) + max(x, y) = " << min(x, y, z) + max(x, y) << endl;
	cout << "min(x , y , z) * max(x, y) = " << min(x, y, z) * max(x, y,z) << endl;

	t = x;
	x = max(x, y, z);
	t1 = y;
	y = (t + y + z) - (max(t, y, z) + min(t, y, z));
	z = min(t, t1, z);
	cout << "\nРезультат перемены значений переменных: \n" << "x = " << x << " y = " << y << " z = " << z << endl;

	u = (pow(max(x, y, z), 2) - pow(2, x) * min(x, y, z)) / (sin(2) + max(x, y) / min(y, z));
	cout << "\nРезультат вычислений выражения = " << u << endl;
}

//Нахождение минимального числа среди трех чисел

double min(double x, double y, double z)
{

	if (x >= z && y >= z) { return z; }
	else
	{
		if (x >= y && z >= y) { return y; }
		else return x;
	}
}

//Нахождение минимального числа среди двух чисел

double min(double x, double y)
{
	if (x >= y) { return y; }
	else return x;
}


//Нахождение максимального числа среди двух чисел

double max(double x, double y)
{
	if (x >= y) { return x; }
	else return y;
}

//Нахождение максимального числа среди трех чисел

double max(double x, double y, double z)
{
	if (x >= y && x >= z) { return x; }
	else 
	{
		if (y >= x && y >= z) { return y; }
		else return z;
	}
}
