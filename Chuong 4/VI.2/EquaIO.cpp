#include "EquaIO.h"
#include "Equation.h"
#include <iostream>
using namespace std;
void SolutionPrint(int nSol, double x1, double x2, double x3, double x4)
{
	switch (nSol)
	{
		case Undetermined:
			cout << "The equation is undetermined." << endl; break;
		case NoSolution:
			cout << "There is no solution." << endl; break;
		case 1:
			cout << "There is one solution. x1 = " << x1 << endl; break;
		case 2:
			cout << "There is two solution. " << x1 << " " << x2 << endl; break;
		case 4:
			cout << "There is four solution." << x1 << " " << x2 << " " << x3 << " " << x4 << endl; break;
	}
}
void SolutionPrint(int nSol, double x1, double x2)
{
	switch (nSol)
	{
	case Undetermined:
		cout << "The equation is undetermined." << endl; break;
	case NoSolution:
		cout << "There is no solution." << endl; break;
	case 1:
		cout << "There is one solution. x1 = " << x1 << endl; break;
	case 2:
		cout << "There is two solution. " << x1 << " " << x2 << endl; break;
	}
}
void SolutionPrint(int nSol, double x1)
{
	switch (nSol)
	{
	case Undetermined:
		cout << "The equation is undetermined." << endl; break;
	case NoSolution:
		cout << "There is no solution." << endl; break;
	case 1:
		cout << "There is one solution. x1 = " << x1 << endl; break;
	}
}
void EquationDisplay(double a, double b)
{
	cout << a << "x + " << b << " = 0" << endl;
}
void EquationDisplay(double a, double b, double c, bool type4)
{
	if (type4)
		cout << a << "x^4 + " << b << "x^2 + " << c << " = 0" << endl;
	else
		cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}
void EquationInput(double& a, double& b)
{
	cout << "Input a, b: "; cin >> a >> b;
}
void EquationInput(double& a, double& b, double& c)
{
	cout << "Input a, b, c: "; cin >> a >> b >> c;
}