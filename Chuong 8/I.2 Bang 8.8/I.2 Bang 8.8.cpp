long nDivisors(long n)
{
	long count = 0, i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count ++;
	}
	return count;
}
#include <iostream>
using namespace std;
int main()
{
	long n;
	cout << "input n: ";
	cin >> n;
	long count = nDivisors(n);
	if (count == 2)
		cout << n << " prime" << endl;
	else
		cout << n << " not prime" << endl;
	return 0;
}