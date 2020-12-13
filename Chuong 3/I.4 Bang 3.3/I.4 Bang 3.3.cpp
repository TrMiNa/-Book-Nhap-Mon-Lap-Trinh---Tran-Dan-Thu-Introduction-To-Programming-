#include <iostream>
using namespace std;
int dX = 7;
int main()
{
	cout << " dX (global) = " << dX << endl;
	//sub-block
	{
		int dX = 9;
		cout << " dX (sub block) = " << dX << endl;
		cout << " dX (global) = " << ::dX << endl;
		::dX = 12;
	}
	cout << " dX (global) is changed = " << dX << endl << endl;

	system("pause");
	return 1;
}