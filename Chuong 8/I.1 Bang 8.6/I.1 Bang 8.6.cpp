#include <iostream>
using namespace std;

long sqrtInt(long n);

int main()
{
	long n;
	cout << "Input n to find the floor of square root of n: ";
	cin >> n;
	cout << "Result: " << sqrtInt(n) << endl;
	return 0;
}

long sqrtInt(long n)
{
	long sum = 1, k = 1, t;
	while (sum < n)
	{
		k += 2;
		sum += k;
	}
	if (sum > n)
		k -= 2;
	t = (k + 1) / 2;
	return t;
}
