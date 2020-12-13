#include <iostream>
using namespace std;
int main()
{
	double sum, x;
	int n;

	cout << "Input n = ";
	cin >> n;

	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		x = 1.0 / (i * i);
		sum = sum + x;
	}
	cout << "Result = " << sum << endl;
	return 1;
}