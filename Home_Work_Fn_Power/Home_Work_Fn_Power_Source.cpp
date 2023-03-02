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
	cout << "¬ведите число дл€ возведени€ его в степень: "; cin >> number;
	cout << endl;
	cout << "¬ведите показатель степени дл€ числа " << number << " : "; cin >> n;
	cout << endl;
	cout << "„исло " << number << " в степени " << n << " равно: " << Power(number, n) << endl << endl;
		
}



