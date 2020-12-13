#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	cout << "Hello form new For Loop!\n";
	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;

	cout << "Input new elements:\n";
	for (auto& x : a)
	{
		cin >> x;
	}

	for (auto x : a)
	{
		cout << x << " ";
	}

	return 0;
}