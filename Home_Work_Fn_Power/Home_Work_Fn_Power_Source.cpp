#include <iostream>
using namespace std;

double Power(double number, int n)
{
	double power_result = 1;

	for (int i = 0; i != n; i++)
	{
		power_result *= number;
	}
	return power_result;
}

void main()
{
	setlocale(LC_ALL, "");
	double number;
	int n;
	cout << "Введите число для возведения его в степень: "; cin >> number;
	cout << endl;
	cout << "Введите показатель степени для числа " << number << " : "; cin >> n;
	cout << endl;
	cout << "Число " << number << " в степени " << n << " равно: " << Power(number, n) << endl << endl;
		
}



