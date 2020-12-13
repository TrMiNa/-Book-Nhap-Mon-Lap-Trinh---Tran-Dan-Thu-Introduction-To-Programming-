#include <iostream>
using namespace std;
int Fib2(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return Fib2(n - 1) + Fib2(n - 2);
}

int main()
{
	int n, m;

	cout << "Input n: ";
	cin >> n;

	m = Fib2(n);

	cout << m << endl;

	return 1;
}