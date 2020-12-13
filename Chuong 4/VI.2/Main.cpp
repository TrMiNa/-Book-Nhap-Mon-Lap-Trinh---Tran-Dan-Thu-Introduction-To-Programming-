#include "EquaIO.h"
#include "Equation.h"
#include <iostream>

using namespace std;

int EquationChoice()
{
	int choice;
	cout << "-----------------------------" << endl;
	cout << "(1) ax + b = 0" << endl;
	cout << "(2) ax^2 + bx + c = 0" << endl;
	cout << "(3) ax^4 + bx^2 + c = 0" << endl;
	cout << "(0) Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	return choice;
}

void Input(int type, double& a, double& b, double& c)
{
	switch (type)
	{
		case 1:
			EquationInput(a, b); EquationDisplay(a, b); break;
		case 2:	case 3:
			EquationInput(a, b, c);
			EquationDisplay(a, b, c, type==3); break;
	}
	cout << endl;
}

int main()
{
	int type = 0, nSol = 0;
	double a, b, c, x1, x2, x3, x4;
	do
	{
		type = EquationChoice();
		if (type < 0 || type>3)
		{
			cout << "Invalid choice!" << endl;
			continue;
		}
		if (type == 0)
			continue;
		Input(type, a, b, c);
		switch (type)
		{
			case 1: nSol = EquaDeg1(a, b, x1); SolutionPrint(nSol, x1); break;
			case 2: nSol = EquaDeg2(a, b, c, x1, x2); SolutionPrint(nSol, x1, x2); break;
			case 3: nSol = EquaQuartic(a, b, c, x1, x2, x3, x4); SolutionPrint(nSol, x1, x2, x3, x4); break;
		}
	} while (type != 0);
	return 1;
}