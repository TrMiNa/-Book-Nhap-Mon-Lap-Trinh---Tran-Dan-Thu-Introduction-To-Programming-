#include <iostream>
using namespace std;
int main()
{
	double temp = 1.0, s = 1.0;
	int n, x;
	cout << "Input x, n: ";
	cin >> x >> n;
	for (float i = 1; i <= n; i++)
	{
		temp *= - x / i;
		s += temp;
	}
	cout << "S(x, n) = " << s << endl;
	return 1;
}	