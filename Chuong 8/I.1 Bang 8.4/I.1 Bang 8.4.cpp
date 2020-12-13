#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	long long temp = 1;
	double x, s = 0;
	cout << "Input x, n: ";
	cin >> x >> n;

	for (float i = 1; i <= n; i++)
	{
		temp *= x;
		s = s + (temp / i);
	}

	cout << fixed << setprecision(2) << "S(x, n) = " << s << endl;

	return 1;
}