#include <iostream>
using namespace std;
int main()
{
	short x = 400, y = 500, z;
	z = x * y;
	cout << "z = " << z << endl;
	cout << "--------------------" << endl;
	float floatMin = 1.401298E-45F;
	float floatMax = 3.40282E+38F;
	cout << "floatMin = " << floatMin << endl;
	cout << "floatMax = " << floatMax << endl;
	cout << "--------------------" << endl;
	floatMin *= 0.9F; cout << endl;
	cout << "floatMin * 0.9 = " << floatMin << endl;
	floatMax += 10;
	cout << "floatMax + 10 = " << floatMax << endl;
	floatMin /= 2;
	cout << "floatMin / 2 = " << floatMin << endl;
	floatMax *= 2;
	cout << "floatMax * 2 = " << floatMax << endl;
	cout << "--------------------" << endl;
	double doubleMin = 4.94066E-324;
	double doubleMax = 1.79769E+308;
	cout << "doubleMin = " << doubleMin << endl;
	cout << "doubleMax = " << doubleMax << endl;
	cout << "--------------------" << endl;
	doubleMin *= 0.9;
	cout << "doubleMin * 0.9 = " << doubleMin << endl;
	doubleMax += 10;
	cout << "doubleMax + 10 = " << doubleMax << endl;
	cout << "--------------------" << endl;
	doubleMin /= 2;
	cout << "doubleMin / 2 = " << doubleMin << endl;
	doubleMax *= 2;
	cout << "doubleMax * 2 = " << doubleMax << endl;
	return 0;
}