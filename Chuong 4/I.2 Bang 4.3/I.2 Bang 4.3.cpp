#include <iostream>
#include <cmath>
using namespace std;
double round(double x, int n)
{
	double result;
	x = x * pow(10, n);
	if (x > 0)
		result = floor(x + 0.5);
	else
		result = -floor(-x - 0.5);
	result /= pow(10, n);
	return result;
}

int main()
{
	double a;
	int n;
	cout << "Input a: "; cin >> a;
	cout << "Round to n: "; cin >> n;
	double y = round(a, n);
	cout << "round(a, n) = " << y << endl;
	return 1;
}