#include <iostream>
using namespace std;
int main()
{
	float sum = 0, x = 1;
	while (x > 0)
	{
		cout << "Input a number = ";
		cin >> x;
		if (x > 0)
			sum += x;
	}
	
	cout << "Sum all numbers = " << sum << endl << endl;
	
	system("pause");
	return 1;
}