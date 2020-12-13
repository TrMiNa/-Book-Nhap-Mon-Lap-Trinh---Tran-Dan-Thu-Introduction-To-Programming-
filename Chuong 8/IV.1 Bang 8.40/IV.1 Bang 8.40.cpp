#include <iostream>
using namespace std;

double Fibonacci(int n)
{
	double lastF = 1, F = 1;
	int k = 1;
	while (k < n) {
		double temp = lastF;
		F = lastF + F;
		lastF = temp;
		k++;
	}
	return F;
}