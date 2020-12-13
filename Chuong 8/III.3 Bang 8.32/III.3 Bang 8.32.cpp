#include <iostream>
using namespace std;
double Power_n(double a, long n)
{
	double result = 1;
	while (n--)
		result *= a;
	return result;
}
double qPower_n(double a, long n)
{
	double result = 1;
	while (n)
	{
		if (n % 2 == 1)
			result *= a;
		a *= a;
		n /= 2;
	}
	return result;
}
int main()
{
	double a;
	long n;
	cout << "Input a, n (a^n): ";
	cin >> a >> n;
	cout << "a^n = " << qPower_n(a, n) << endl;
	return 0;
}