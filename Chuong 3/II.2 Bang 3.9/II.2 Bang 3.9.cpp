#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n; string str;
	cout << "Input n = ";
	cin >> n;
	switch (n)
	{
		case 0: str = "Zero"; break;
		case 1: str = "One"; break;
		case 2: str = "Two"; break;
		case 3: str = "Three"; break;
		case 4: str = "Four"; break;
		case 5: str = "Five"; break;
		case 6: str = "Six"; break;
		case 7: str = "Seven"; break;
		case 8: str = "Eight"; break;
		case 9: str = "Nine"; break;
		case 10: str = "Ten"; break;
		case 11: case 12: case 13: case 14: case 15:
			str = "Eleven to fifteen"; break;
		default:
			if (n < 0)		str = "Negative";
			else str = "Greater than fifteen";
	}
	cout << "Result: " << str << endl << endl;
	system("pause");
	return 1;
}