#include <iostream>
#include <cmath>
using namespace std;
const double Epislon = 0.000000001;
double Func1(double x)
{
	return pow(x, 5) + 7 * x + 1; // ham x^5+7x+1
}
double Func2(double x)
{
	return 2 * pow(x, 11) + 17 * pow(x, 5) + 1;
}
double Solve(double F(double x), double a, double b)
{
	double left = a, right = b;
	while (right - left > Epislon) {
		double mid = (left + right) / 2;
		if (F(left) * F(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	return (left + right) / 2;
}
int main()
{
	double x;
	x = Solve(Func1, -1, 0);
	cout << "First equation, x= " << x << endl;
	cout << "Test: " << Func1(x) << endl;
	x = Solve(Func2, -1, 0);
	cout << "Second equation, x= " << x << endl;
	cout << "Test: " << Func2(x) << endl;
	return 1;
}