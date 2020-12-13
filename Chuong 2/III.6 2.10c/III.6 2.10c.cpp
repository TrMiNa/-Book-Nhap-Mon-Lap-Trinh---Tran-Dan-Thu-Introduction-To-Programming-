#include <iostream>
using namespace std;
#define MAXSZ 256
// Nhap va xuat bien chuoi trong C++
int main()
{
	char str[MAXSZ + 1];
	string str1, str2;
	cout << "First string: ";
	cin >> str; str1 = str;
	_flushall();
	cout << "Second string: ";
	cin >> str; str2 = str;
	cout << "\t" << str1.c_str() << endl;
	cout << "\t" << str2.c_str() << endl;
	return 0;
}