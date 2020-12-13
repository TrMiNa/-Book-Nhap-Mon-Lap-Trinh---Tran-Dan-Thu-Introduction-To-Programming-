// V.1 Bang 7.30.cpp Mang dong 1 chieu dung kieu vector<auto> cua C++

#include <iostream>
#include<vector>
using namespace std;

void arrayInput(vector<double>& a)
{
	int n = 0;
	while (true)
	{
		cout << "n element(s), Please input n = ";	cin >> n;
		if (n < 0)
			cout << "Error, try again..." << endl;
		else
			break;
	}
	a.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";	cin >> a[i];
	}
}

void arrayOutput(vector<double>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	vector<double> b;
	arrayInput(b);
	arrayOutput(b);
	return 1;
}