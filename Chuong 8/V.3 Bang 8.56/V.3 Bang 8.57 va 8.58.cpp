#include <iostream>
using namespace std;
const int MaxSz = 20;
typedef double MATRIX[MaxSz][MaxSz];
double sumRow(MATRIX& A, int n, int k)
{
	if (k<0 || k >= n || n <= 0 || n>MaxSz)
		return 0;
	double sum = 0;
	while(n--)
		sum += A[k][n];
	return sum;
}
bool isIncrease(MATRIX& A, int n)
{
	int i = n;
	while (--i)
	{
		double s1 = sumRow(A, n, i - 1);
		double s2 = sumRow(A, n, i);
		if (s1 > s2)
			return false;
	}
	return true;
}
bool isIncrease_2(MATRIX& A, int n)
{
	int i = n - 1;
	double s2 = sumRow(A, n, i);
	while (i--)
	{
		double s1 = sumRow(A, n, i);
		if (s1 > s2)
			return false;
		s2 = s1;
	}
	return true;
 }