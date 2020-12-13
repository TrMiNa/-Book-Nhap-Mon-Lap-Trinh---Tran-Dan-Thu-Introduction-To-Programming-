#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double sum = 0;
	double x, y;
	do
	{
		cout << "Input a number: ";
		cin >> x;
		if (x <= 0)
			continue;
		y = sqrt(1 + x * x);
		sum += 1 / (1 + y);
	} while (x != 0);
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(10);
	cout << "Result: " << sum << endl;
	return 1;
}