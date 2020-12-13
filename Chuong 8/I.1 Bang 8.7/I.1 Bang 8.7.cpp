#include <iostream>
using namespace std;

bool isPerfect(long n);
long sumDivisors(long n);

int main()
{
	int n;
	cout << "This program will print out all the perfect number from n to 1: " << endl;
	cout << "Input n: ";
	cin >> n;
	while (n--)
	{
		if (isPerfect(n))
			cout << n << endl;
	}
	return 0;
}

long sumDivisors(long n)
{
	long s = 0, k = n;
	while (--k)
	{
		if (n % k == 0)
			s += k;
	}
	return s;
}

bool isPerfect(long n)
{
	return (n == sumDivisors(n));
}

