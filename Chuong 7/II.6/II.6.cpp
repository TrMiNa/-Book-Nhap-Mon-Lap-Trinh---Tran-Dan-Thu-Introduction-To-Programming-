#include <iostream>
using namespace std;

	//Ham input array
void Input(int a[], int n)
{
	for (int i = 0 ; i < n; i++)
	{
		cout << "Input array - position " << i + 1 << ": ";
		cin >> a[i];
	}
}

	//Ham output array
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
	
	// Bang 7.6 Sap xep nho doi cho tru tiep
void Sapxep(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

	// Bang 7.8 Them phan tu vao mang so nguyen tai vi tri k
bool Insert(int a[], int& n, int x, int k)
{
	if ((k < 0) || (k > n))
		return false;

	for (int i = n - 1; i >= k-1; i--) 
	{
		a[i + 1] = a[i];
	}

	a[k-1] = x;
	n++;
	return true;
}

	// Bang 7.10 Xoa phan tu tai vi tri k, yeu cau tuy tri thu tu
void Remove(int a[], int& n, int k)
{
	if ((k < 0) || (k > n))
		return;

	for (int i = k - 1; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

	//Bang 7.11 Tach cac so chan va cac so le thanh hai mang
void TachChanLe(int a[], int n, int ch[], int& k, int le[], int& h)
{
	k = 0; h = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			ch[k++] = a[i];
		else
			le[h] = a[i];
	}
}

