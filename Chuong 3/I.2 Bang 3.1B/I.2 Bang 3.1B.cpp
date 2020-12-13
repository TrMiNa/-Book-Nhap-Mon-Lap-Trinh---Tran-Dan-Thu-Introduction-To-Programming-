#include <iostream>
using namespace std;
int main()
{
	//main block
	int a = 1984, b = 1988;
	cout << " a (main block) = " << a << endl;
	cout << " b (main block) = " << b << endl;
	//sub block
	{
		int b = 1996;
		a = 2001;
		cout << " a (of main block is changed) = " << a << endl;
		cout << " b (sub block) = " << b << endl;
	}
	cout << "Now in main block:" << endl;
	cout << " a (changed) = " << a << endl;
	cout << " b (unchanged) = " << b << endl;
	return 1;
}