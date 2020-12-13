#include <iostream>
using namespace std;
int* arrayInput(int& n)
{
	int* a = NULL;
	while (true)
	{
		cout << "So phan tu can su dung la: "; cin >> n;
		if (n < 0)
			cout << "Nhap sai. Moi ban nhap lai..." << endl;
		else
			break;
	}
	a = new int[n];
	if (a == NULL)
	{
		n = 0;
		return NULL;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";	cin >> a[i];
	}
	return a;
}

void arrayOut(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int n;
	int* b = arrayInput(n);
	if (n > 0)
	{
		arrayOut(b, n);
		delete[] b;
	}
	return 1;
}