#include <iostream>
using namespace std;

void Factors(long n, long primes[], long k[], int& np)
{
	if (n < 0)
	{
		Factors(-n, primes, k, np);
		primes[0] = -primes[0];
		return;
	}
	if (n <= 3)
	{
		primes[0] = n; k[0] = 1; np = 1;
		return;
	}
	else
	{
		long p = 2, countFactor = 0;
		np = 0;
		while (n > 1)
		{
			if (n % p == 0){
				if (countFactor == 0){
					primes[np] = p;
					np++;
				}
				countFactor++;
				k[np - 1] = countFactor;
				n /= p;
			}
			else{
				p++; countFactor = 0;
				if (p * p > n)
				{
					primes[np] = n; k[np] = 1;
					np++;
					break;
				}
			}
		}
	}
}

void factor(int n) //Ham cua Tran-Minh Nam
{
	cout << n << " = ";
	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}
		if (count != 0)
		{
			if (i < n)
				cout << i << "^" << count << " x ";
			else
				cout << i << "^" << n;
		}	
	}
}
int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	factor(n);
	return 0;
}