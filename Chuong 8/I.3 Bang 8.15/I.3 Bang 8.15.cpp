#include <iostream>
using namespace std;
int minArray(double a[], int n)
{
	int idx = --n;
	while (n--)
	{
		if (a[idx] > a[n])
			idx = n;
	}
	return idx;
}

int main()
{
	double a[5];
	cout << "Input the array: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	cout << "The index of the biggest is: " << minArray(a, 5) << endl;
	return 0;
}