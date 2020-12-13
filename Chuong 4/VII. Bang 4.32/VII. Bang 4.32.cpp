#include <iostream>
using namespace std;

void Swap(auto& a, auto& b)
{
	auto c = a;
	a = b; b = c;
}
int main()
{
	auto x = 1.0, y = 2.0;
	Swap(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	return 1;
}