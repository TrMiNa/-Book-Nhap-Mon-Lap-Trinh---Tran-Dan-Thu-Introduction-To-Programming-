#include <iostream>
#include <cmath>
using namespace std;
double Norm(double x)
{
	return fabs(x);
}

double Norm(double x, double y)
{
	return sqrt(x * x + y * y);
}

double Norm(double x, double y, double z)
{
	return sqrt(x * x + y * y + z * z);
}
