#include <iostream>
using namespace std;

long ModPower_n(long a, long b, long n)
{
	long d = 1;
	while (n--)
	{
		d = d * a % b;
	}
	return d;
}

long qModPower_n(long a, long b, long n)
{
	long d = 1, p = a;
	while (n)
	{
		if (n % 2 == 1)
			d = d * p % b;
		p = (p * p) % b;
		n /= 2;
	}
	return d;
}