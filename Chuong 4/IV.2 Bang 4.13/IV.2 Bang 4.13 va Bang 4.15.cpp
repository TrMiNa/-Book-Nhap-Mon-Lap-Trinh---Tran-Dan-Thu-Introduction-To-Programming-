#include <iostream>
#include <cmath>
using namespace std;

const int NoSolution = 0, Undetermined = -1;

int EquaDeg1(double a, double b, double& x)
{
	int nSolution;
	if (a != 0) {
		x = -b / a;
		nSolution = 1;
	}
	else {
		x = 0;
		if (b == 0)
			nSolution = Undetermined;
		else
			nSolution = NoSolution;
	}
	return nSolution;
}

int EquaDeg2(double a, double b, double c, double& x1, double& x2)
{
	int numSolution; x1 = x2 = 0;
	if (a == 0)
		numSolution = EquaDeg1(b, c, x1);
	else
	{
		double Delta = b * b - 4 * a * c; 
		double two_a = 2 * a;
		if (Delta < 0)
			numSolution = NoSolution;
		else if (Delta == 0) {
			x1 = x2 - b / two_a;
			numSolution = 1;
		}
		else {
			double sqrtDelta = sqrt(Delta);
			x1 = (-b - sqrtDelta) / two_a;
			x2 = (-b + sqrtDelta) / two_a;
			numSolution = 2;
		}
	}
	return numSolution;
}

int EquaQuartic(double a, double b, double c, double& x1, double& x2, double& x3, double& x4)
{
	int nSolution, nSol1, nSol2;
	double y1, y2;
	x1 = x2 = 0; x3 = x4 = 0;
	nSol1 = EquaDeg2(a, b, c, y1, y2);
	switch (nSol1){
		case NoSolution:
		case Undetermined:
			nSolution = nSol1; break;
		case 1:
			nSolution = EquaDeg2(1, 0, -y1, x1, x2); break;
		case 2:
			nSol2 = EquaDeg2(1, 0, -y1, x1, x2);
			switch (nSol2) {
				case NoSolution:
					nSolution = EquaDeg2(1, 0, -y2, x1, x2); break;
				case 1: 
					nSolution = 1 + EquaDeg2(1, 0, -y2, x2, x3); break;
				case 2:
					nSolution = 2 + EquaDeg2(1, 0, -y2, x3, x4); break;
			}
	}
	return nSolution;
}

//Test
int main()
{
	double a, b, c;
	double n1, n2, n3, n4;
	cout << "Input a, b, c: "; cin >> a >> b >> c;
	int y = EquaQuartic(a, b, c, n1, n2, n3, n4);
	cout << "So nghiem la: " << y << endl;
	cout << "x1 = " << n1 << endl;
	cout << "x2 = " << n2 << endl;
	cout << "x3 = " << n3 << endl;
	cout << "x4 = " << n4 << endl;
	return 1;
}