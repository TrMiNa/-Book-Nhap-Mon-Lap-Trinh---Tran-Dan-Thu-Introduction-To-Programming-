#include <iostream>
using namespace std;
#define M 20
#define N 20

//Bang 7.19 Chep dong k len dong h
void ChepDong(int a[M][N], int m, int n, int k, int h)
{
	if (k < 1 || k >= m || h < 1 || h >= n)
		return;
	for (int i = 0; i < n; i++)
	{
		a[h][i] = a[k][i];
	}
}

//Bang 7.20 Chep cot k len cot h
void ChepCot(int a[M][N], int m, int n, int k, int h)
{
	if (k < 1 || k >= m || h < 1 || h >= n)
		return;
	for (int i = 0; i < m; i++)
		a[i][h] = a[i][k];
}

//Bang 7.21 Ham hoan doi 2 dong cua mang 2 chieu
void HoanDoiDong(int a[][N], int m, int n, int k, int h)
{
	int i, temp;
	if (k == h)	return;
	for (i = 0; i < n; i++)
	{
		temp = a[k][i];
		a[k][i] = a[h][i];
		a[h][i] = temp;
	}
}

//Bang 7.22 Ham hoan doi 2 cot cua mang 2 chieu
void HoanDoiCot(int a[][N], int m, int n, int k, int h)
{
	int temp;
	if (k == h)	return;
	for (int i = 0; i < m; i++)
	{
		temp = a[i][h];
		a[i][h] = a[i][k];
		a[i][k] = temp;
	}
}

//Bang 7.24 Ham loai bo dong k, cuon dong len
void LoaiBoDong(int a[][N], int& m, int n, int k)
{
	int i, j, t;
	int b[M][N];
	if (k < 0 || k > m)
		return;
	if (k == m - 1)
	{
		m--;
		return;
	}
	t = 0;
	for (i = 0; i < m; i++)
	{
		if (i == k)
			continue;
		for (j = 0; j < n; j++)
			b[t][j] = a[i][j];
		t++;
	}
	for (i = 0; i < t; i++)
		for (j = 0; j < n; j++)
			a[i][j] = b[i][j];
	m--;
}

