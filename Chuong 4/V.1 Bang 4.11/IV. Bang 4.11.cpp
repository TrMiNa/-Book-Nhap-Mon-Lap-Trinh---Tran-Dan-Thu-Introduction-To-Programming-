#include <iostream>
#include <cmath>

using namespace std;

int isPrime(long n)
{
	int Prime;
	if (n < 0) n = -n;
	if (n == 0 || n == 1) Prime = 0;
	else
	{
		long i = 2;
		Prime = 1;
		while (i <= sqrt(n))
		{
			if (n % i == 0)
			{
				Prime = 0;
				break;
			}
			i++;
		}
	}
	return Prime;
}

void PrimeListing(long n)
{
	for (long i = 2; i <= n; i++) {
		if (isPrime(i))
			cout << i << endl;
	}
}

int main()
{
	long n;
	cout << "Input n: ";
	cin >> n;
	PrimeListing(n);

	return 1;
}