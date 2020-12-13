#include <iostream>
using namespace std;

template <class T>
void Swap(T& a, T& b)
{
	T c = a;
	a = b; b = c;
}
int main()
{
	double x, y;
	cout << "Input two numbers: ";
	cin >> x >> y;
	Swap(x, y);
	cout << "After swapping: " << x << ", " << y << endl;
	return 1;
}