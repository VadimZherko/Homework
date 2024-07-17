#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cout << "Выберите номер задания \n1\n2\n3\n4" << endl;
	cin >> n;
	

	switch (n)
	{
	case 1:
	{
		cout << "Выберите число n" << endl;
		cin >> n;
		cout << "Трехзначные числа сумма цифр, которых равна " << n << ":" << endl;

		for (int i = 101; i < 1000; i++)
		{
			if (i / 100 + i % 10 + ((i % 100) / 10) == n)
			{
				cout << i << endl;;
			}
		}
	}
	case 2:
	{
		cout << "Пары двухзначных чисел:" << endl;

		int first_number = 10, second_number = 10;

		while (first_number != 100)
		{
			if ((first_number * 100 + second_number) % (first_number * second_number) == 0 )
			{
				cout << first_number << " и " << second_number<< endl;
				++second_number;
			}
			else 
			{
				++second_number;
			}
			
			if (second_number == 100) 
			{ 
				++first_number;  
				second_number = 10;
			}
			
		}
	}
	case 3:
	{
		for (int i = 102; i != 1000; i++)
		{
			if ((i / 100) != (i % 10) && ((i % 100) / 10) != (i / 100) && ((i % 100) / 10) != (i % 10))
			{
				cout << i << endl;
			}
		}
	}
	case 4:
	{
		int m = 11, n = 11, changed_m, changed_n;
		
		while (m != 100)
		{
			changed_m = m / 10 + (m % 10) * 10;
			changed_n = n/ 10 + (n % 10) * 10;

			if (m * n == changed_m * changed_n)
			{
				cout << m << " и " << n << endl;
				n++;
			}
			else { n++; }
			
			if (n == 100) 
			{ 
				n = 11;
				m++;
			}
		}
	}
	}
}