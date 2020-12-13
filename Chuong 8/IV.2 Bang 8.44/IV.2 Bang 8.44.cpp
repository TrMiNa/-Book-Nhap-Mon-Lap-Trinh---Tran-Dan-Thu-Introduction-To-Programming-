#include <iostream>
using namespace std;

const double epsilon = 0.00000001;

double SqrtAppr(double a)
{
	if (a <= 0)
		return 0;
	double xLast, x = 1;
	do
	{
		xLast = x;
		x = xLast / 2 + a / (2 * xLast);
	} while ((x - xLast) >= epsilon || (xLast - x) >= epsilon);
	return x;
}

int main()
{
	double a;
	cout << "Input a to calculate square root of a: ";
	cin >> a;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(20);
	cout << "The approximately square root of a is: " << SqrtAppr(a) << endl;
	return 0;
}