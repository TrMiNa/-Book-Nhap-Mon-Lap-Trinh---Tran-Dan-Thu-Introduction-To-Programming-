#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	char str[20] = "Teaching";
	//Ham strlen(const char *s)
	cout << "strlen(str) = " << strlen(str) << endl << endl;

	//Ham strcat(char dest, const char src);
	strcat(str, "math");
	cout << "strcat(str, \" math\") = " << str << endl << endl;

	//Ham char strcpy(char dest, const char src);
	strcpy(str, "Hello!");
	cout << "strcpy(str, \"Hello!\") = " << str << endl << endl;

	char a[20];
	char b[20];
	cout << "Input a: ";	cin >> a;
	cout << "Input b: ";	cin >> b;

	//Ham int strcmp(const char *s1, const char *s2);
	int sosanhs1s2 = strcmp(a, b);
	cout << "strcmp(a, b) = " << sosanhs1s2 << endl;

	//const char *strstr(const char *s1, const char *s2)
	/*
	const char x[20] = "abcdefghiklmn";
	const char y[20] = "abc";
	char *z;
	cout << "The substring is: " << strstr(x, y) << endl;
	*/

	char s1[] = "GeeksforGeeks";
	char s2[] = "for";
	char* p;
	
	while (cin.get() != '\n');
	cout << "Input a: ";	cin.get(a, 10);		while (cin.get() != '\n');
	cout << "Input b: ";	cin.get(b, 10);		while (cin.get() != '\n');
	// Find first occurrence of b in a 
	p = strstr(a, b);
	if (p)
		cout << "b in a" << endl;
	else
		cout << "Not found b in a." << endl;

	return 1;
}