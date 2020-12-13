#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double x, y, Fxy;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Fxy = x + sqrt(1 + y * y);
	cout << "F(x,y) = " << Fxy << endl;

	system("pause");
	return 0;
}