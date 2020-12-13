#include <iostream>
#include <vector>
using namespace std;

void arrayDoubleOutput(const vector<double>& a) {
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
}
void arrayDoubleInput(vector<double>& a)
{
	double x;
	while (cin >> x)
	{
		a.push_back(x);
	}
}
int main()
{
	vector<double> a;
	cout << "Input a[], press Ctrl X then Enter to stop: " << endl;
	arrayDoubleInput(a);
	cout << "Elements in the array: ";
	arrayDoubleOutput(a);
	cout << endl;
	return 1;
}