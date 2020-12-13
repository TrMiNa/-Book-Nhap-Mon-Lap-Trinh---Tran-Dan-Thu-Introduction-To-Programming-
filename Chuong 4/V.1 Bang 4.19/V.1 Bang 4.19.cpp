#include <iostream>
#include <cmath>
using namespace std;
double round(double x);
double round(double x, int n);
double round(double x)
{
	if (x >= 0)
		return floor(x + 0.5);
	else
		return -floor(-x + 0.5);
}
double round(double x, int n)
{
	double result, scale = pow(10, n);
	x = x * scale;
	if (x >= 0)
		result = floor(x + 0.5);
	else
		result = -floor(-x + 0.5);
	return result/scale;
}
int main()
{
	double x, y, z;
	int a;
	cout << "Input x: ";
	cin >> x;
	y = round(x);
	cout << "round(x) = " << y << endl;
	cout << "Nhap so chu so thap phan can lay: ";
	cin >> a;
	z = round(x, a);
	cout << "round(x, a) = " << z << endl;
	return 1;
}