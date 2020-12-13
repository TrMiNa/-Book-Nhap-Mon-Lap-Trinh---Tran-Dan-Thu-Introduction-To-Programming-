#include <iostream>
using namespace std;
int main()
{
	int n, min = 0, premin = 0;
	do
	{
		cout << "Input n (0: stop): ";	cin >> n;

		if (n == 0)
			break;

		if (min == 0)
		{
			min = n;
		}
		else if (premin == 0)
		{
			if (n >= min)
				premin = n;
			else
			{
				premin = min;
				min = n;
			}
		}
		else
		{
			if (n < min)
			{
				premin = min; min = n;
			}
			else if (n < premin)
				premin = n;
		}
	} while (n != 0);
	if (premin == 0 || min == 0 || min == premin)
		cout << "No second smallest" << endl;
	else
		cout << "The second smallest is: " << premin << endl;
	return 0;
}