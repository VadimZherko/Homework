#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fact(int);

int main()
{
	setlocale(LC_ALL, "Ru");
	
	int k = 1;
	double x = 0, term = 1, sum = 0;

	cout << "Введите число" << endl;
	cin >> x;

	for (; abs(term) > 0.000001; k++)
	{
		term = (pow(-1, k) * pow(x, 2 * k + 1)) / (fact(k) * (2 * k + 1));
		sum += term;
	}
	
	cout << "Кол-во слагаемых = " << k << endl;
	cout << "Сумма = " << sum;
}

int fact(int n) {
	if (n == 0 || n==1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}