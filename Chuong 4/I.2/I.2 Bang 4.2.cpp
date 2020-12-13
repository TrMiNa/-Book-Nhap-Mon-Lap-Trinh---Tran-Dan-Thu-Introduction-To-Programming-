#include <iostream>
#include <cmath>
using namespace std;
double round(double x);

double round(double x)
{
	double result;
	if (x >= 0)
		result = ceil(x - 0.5);
	else
		result = -ceil(-x + 0.5);
	return result;
}
