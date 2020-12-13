#include <iostream>
using namespace std;
int main()
{
	long long sum = 0;
	long n, k = 1;

	cout << "Nhap n = ";
	cin >> n;

	while (sum + k <= n)
	{
		sum += k;
		k++;
	}
	k--;
	cout << "k = " << k << endl;
	cout << "Sum from 1 to k: " << sum << endl;
	if (sum == n)
		cout << "n is a sum from 1 to k." << endl;
	else
		cout << "n is not a sum from 1 to k." << endl;
	cout << endl;

	system("pause");
	return 1;
}