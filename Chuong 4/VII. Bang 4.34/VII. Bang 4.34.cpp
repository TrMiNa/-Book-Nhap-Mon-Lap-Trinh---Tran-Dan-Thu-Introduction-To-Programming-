#include <iostream>
#include <cmath>
using namespace std;
const auto Epsilon = 0.000000000001;

double Func1(double x)
{
	return pow(x, 5) + 7 * x + 1;
}
double Func2(double x)
{
	return 2 * pow(x, 11) + 17 * pow(x, 5) + 1;
}
auto Solve(auto F(auto x), auto a, auto b)
{

}