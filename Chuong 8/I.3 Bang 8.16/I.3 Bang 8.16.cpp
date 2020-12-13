#include <iostream>
using namespace std;
int positiveMin(double a[], int n)
{
	int idx = -1;
	for (int i = 0; i < n; i++)
		if ((a[i] > 0) && (idx == -1 || a[idx] > a[i]))
			idx = i;
	return idx;
}
int main()
{
	double a[5];
	cout << "Input array with 5 components: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	cout << "The index of the smallest positive components is: " << positiveMin(a, 5) << endl;
	return 0;
}