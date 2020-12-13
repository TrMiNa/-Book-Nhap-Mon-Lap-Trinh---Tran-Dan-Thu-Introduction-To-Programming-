#include <iostream>
using namespace std;

const int MaxSz = 20;
typedef double MATRIX[MaxSz][MaxSz];

//Bang 8.55 Vi du ve chuong trinh nhan hai ma tran vuong
void matrixPrint(ostream& inDev, MATRIX& A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			inDev << A[i][j] << " ";
		}
		inDev << endl;
	}
	inDev << endl;
}
void matrixProduct(MATRIX &A, MATRIX &B, MATRIX& C, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < n; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	}
}
int main()
{
	int n = 3;
	MATRIX A = { {1, 2, 3}, {0, 4, 1}, {1, 5, 6} };
	MATRIX B = { {1, 0, 2}, {3, 0, 1}, {4, 2, 5} };
	MATRIX C;
	matrixPrint(cout, A, n);
	matrixPrint(cout, B, n);
	matrixProduct(A, B, C, n);
	matrixPrint(cout, C, n);
	return 0;
}