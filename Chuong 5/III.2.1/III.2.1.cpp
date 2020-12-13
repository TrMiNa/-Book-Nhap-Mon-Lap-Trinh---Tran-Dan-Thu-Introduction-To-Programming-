#include <iostream>
using namespace std;
int Fib1(int n)
{
	int a, b, c, k;
	if (n <= 1)
		return n;
	a = 0; b = 1;
	for (k = 2; k <= n; k++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n, m;

	cout << "Input n: ";
	cin >> n;

	m = Fib1(n);

	cout << m << endl;
	
	return 1;
}