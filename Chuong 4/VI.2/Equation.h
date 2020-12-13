#ifndef _MY_EQUATIONS
#define _MY_EQUATIONS

const int NoSolution = 0, Undetermined = -1;
int EquaDeg1(double a, double b, double& x1);
int EquaDeg2(double a, double b, double c, double& x1, double& x2);
int EquaQuartic(double a, double b, double c, double& x1, double& x2, double& x3, double& x4);
#endif
