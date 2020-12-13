#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double p, q, y, delta;
	cout << "p = ";
	cin >> p;
	cout << "q = "; 
	cin >> q;
	delta = pow(p, 6.0) + pow(q, 2.0);
	delta = sqrt(delta);
	y = pow(delta - q, 1.0 / 3) - pow(delta + q, 1.0 / 3);
	cout << "Nghiem y = " << y << endl;
	double test = pow(y, 3) + 3 * p * p * y + 2 * q;
	cout << "y^3 + 3p^2 y +2q = " << test << endl;
	system("pause");
	return 0;
}