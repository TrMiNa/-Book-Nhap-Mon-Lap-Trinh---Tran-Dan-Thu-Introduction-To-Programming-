#include <iostream>
#include <vector>
using namespace std;

typedef vector<double> doubles;
typedef vector<doubles> double2D;

void Init(double2D& a, int n)
{
	a.resize(n);
	for (int i = 0; i < a.size(); i++)
		a[i].resize(n);
}
void double2D_In(double2D& a)
{
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; i < a[i].size(); j++)
		{
			cin >> a[i][j];
		}
}
void double2D_Out(double2D& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()	
{
	double2D A; int n;
	cout << "Size of Square Array: "; cin >> n;
	if (n <= 0 )
	{
		cout << "Invalid size..." << endl;
		return 0;
	}
	Init(A, n);
	cout << "Input its elements: " << endl;
	double2D_In(A);
	cout << "Elements of the Square array: " << endl;
	double2D_Out(A);
	return 1;
}
