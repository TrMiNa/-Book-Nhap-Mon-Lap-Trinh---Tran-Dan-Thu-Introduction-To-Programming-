#include <iostream>
#include <cmath>
using namespace std;
double round(double x, int n=0);
double round(double x, int n)
{
	double result, scale = pow(10, n);
	x = x * scale;
	if (x >= 0)
		result = floor(x + 0.5);
	else
		result = -floor(-x + 0.5);
	return result / scale;
}
int main()
{
	double x, y, z;
	x = 2.18587342;
	cout << "Input x: ";
	cin >> x;
	y = round(x, 0);
	z = round(x, 2);
	cout << "round(x) = " << y << endl;
	cout << "round(x, 2) = " << z << endl;
	return 1;
}
