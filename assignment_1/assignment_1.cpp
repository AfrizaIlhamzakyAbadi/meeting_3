#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cout << "To calculate the real solutions for roots of a quasratic equation" << endl;
	cout << "axx + bx + c = (x - x1)(x - x2) 0" << endl;
	cout << "enter the first and the second coefficient, and the constanta" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double D = b * b - 4 * a * c;
	double x1 = (-b + sqrt(D)) / 2.0 * a;
	double x2 = (-b - sqrt(D)) / 2.0 * a;
	cout << "D = " << D << endl;
	if (D >= 0.0)
	{
		if (D == 0.0)
		{
			cout << "The root of the quadratic equation is " << x1 << endl;
		}
		if (D > 0.0)
		{
			cout << "The roots of the quadratic equation is " << x1 << " and " << x2 << endl;
		}
	}
	else
	{
		cout << "There is no real solution.";
	}
	return 0;
}