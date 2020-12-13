#include <string>
#include <iostream>
using namespace std;

void strSort(int n, string str[])
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (str[i] > str[j])
			{
				string s = str[i];
				str[i] = str[j];
				str[j] = s;
			}
}

int main()
{
	string str1("012");
	string str2("345");
	string s;
	s = str1 + str2;
	cout << "Result " << str1 << " + " << str2 << ": " << s << endl;
	string country[] = { "Viet Nam", "Lao", "Campuchia", "Thailand", "Miamar" };
	int n = sizeof(country) / sizeof(country[0]);
	strSort(n, country);
	cout << "After sorting (alphabet): " << endl;
	for (int i = 0; i < n; i++)
		cout << "\t" << country[i] << endl;
	return 1;
}