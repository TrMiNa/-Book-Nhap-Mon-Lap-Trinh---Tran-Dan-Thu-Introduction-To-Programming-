#include <iostream>
using namespace std;
int main()
{
	double x = 1.123, y = 1.456;
	double z = 2.579;
	
	if (x + y == z)
		cout << "x + y = z" << endl;
	else {
		cout << "x + y != z" << endl;
		cout << "x + y - z = " << x + y - z << endl;
	}

	double a = 1.125, b = 1.250;
	double c = 2.375;
	if (a + b == c)
		cout << "a + b = c" << endl;
	else {
		cout << "a + b != c" << endl;
	}

	system("pause");
	return 0;
}