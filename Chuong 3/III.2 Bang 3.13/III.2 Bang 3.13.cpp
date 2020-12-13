#include <iostream>
using namespace std;
int main()
{
	long long sum=0;
	long n;

	do
	{
		cout << "Input a number = ";
		cin >> n;
		if (n > 0)
			sum += n;
	} while (n > 0);

	cout << "Sum all numbers = " << sum << endl;
	system("pause");
	return 1;
}