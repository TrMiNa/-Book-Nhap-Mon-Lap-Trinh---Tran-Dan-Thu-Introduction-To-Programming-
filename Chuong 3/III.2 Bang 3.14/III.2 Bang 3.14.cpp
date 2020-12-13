#include <iostream>
using namespace std;
int main()
{
	long long sum = 0;
	long n, k = 1;

	cout << "Input n = ";
	cin >> n;

	do
	{
		sum += k;
		k++;
	} while (sum < n);

	k--;
	if (sum > n)
	{
		sum -= k;
		k--;
	}

	cout << "k = " << k << endl;
	cout << "Sum from 1 to k: " << sum << endl;
	if (sum == n)
		cout << "n is a sum from 1 to k." << endl;
	else
		cout << "n is not a sum from 1 to k" << endl;

	return 1;
}