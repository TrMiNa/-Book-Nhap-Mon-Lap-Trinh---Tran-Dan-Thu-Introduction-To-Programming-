#include <iostream>
#include <cmath>
using namespace std;
double Func(double x)
{
	return pow(x, 9) + x + 1;
}
void Solve(double& x)
{
	const double Epsilon = 0.0000000001;
	double left = -1, right = 0;
	while (right - left > Epsilon) {
		double mid = (left + right) / 2;
		if (Func(left) * Func(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	x = (left + right) / 2;
}
int main()
{
	double x;
	Solve(x);
	cout << "x = " << x << endl;
	cout << "Test: " << Func(x) << endl;
	return 1;
}