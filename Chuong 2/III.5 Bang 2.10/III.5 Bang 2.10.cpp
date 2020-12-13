// Bang 2.10 chuong trinh minh hoa ki tu 8 bit
#include <iostream>
using namespace std;

int main()
{
	
	char ch;
	ch = 65;
	cout << "ch = " << ch << endl;
	ch = 'A';
	cout << "ch = " << ch << endl;
	cout << "ch = "; cin >> ch;
	cout << "ASCII code = " << int(ch) << endl;
	ch -= ('a' - 'A') * (ch >= 'a' && ch <= 'z');
	cout << "Upper case: " << ch << endl;

	system("pause");
	return 0;
}