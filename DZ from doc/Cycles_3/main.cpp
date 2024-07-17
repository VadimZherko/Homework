#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fact(int);

int main()
{
	setlocale(LC_ALL, "Ru");
	
	int k = 1;
	double x = 0, term = 0, sum = 0;

	cout << "Введите число" << endl;
	cin >> x;


	for (; term < 0.000001; k++)
	{
		term = (pow(-1, k) * pow(x, 2 * k + 1)) / (fact(k) * (2 * k + 1));
		sum += term;
	}
	
	cout << "Кол-во слагаемых = " << k << endl;
	cout << "Сумма = " << sum;
}

//int fact(int i)
//{
//	if (i > 1)
//	{
//		return i * fact(i - 1);
//	}
//	else   return i;
//}

int fact(int n) {
	if (n == 0 || n==1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}