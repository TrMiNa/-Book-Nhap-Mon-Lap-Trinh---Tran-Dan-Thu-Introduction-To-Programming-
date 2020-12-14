#include <iostream>
using namespace std;

struct Fraction
{
	long num, denom;
};

long greatestDivisor(long a, long b)
{
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
void reduce(Fraction& p)
{
	long gdc = greatestDivisor(p.num, p.denom);
	p.num /= gdc;
	p.denom /= gdc;

}
void showFraction(Fraction p)
{
	reduce(p);
	cout << p.num << "/" << p.denom;
}
Fraction operator + (Fraction p, Fraction q)
{
	Fraction r;
	r.num = p.num * q.denom + p.denom * q.num;
	r.denom = p.denom * q.denom;
	return r;
}
Fraction operator - (Fraction p, Fraction q)
{
	q.num = -q.num;
	return p + q;
}
Fraction operator * (Fraction p, Fraction q)
{
	Fraction r;
	r.num = p.num * q.num;
	r.denom = p.denom + q.denom;
	return r;
}
Fraction operator /(Fraction p, Fraction q)
{
	Fraction r;
	r.num = p.num * q.denom;
	r.denom = p.denom * q.num;
	return r;
}
Fraction operator +=(Fraction& p, Fraction q)
{
	p = p + q;
	return p;
}
int main()
{
	Fraction r = { 4,3 }, s = { 3,5 };
	Fraction t;
	t = r + s;
	showFraction(t);
	cout << endl;
	t = r + r - s;
	showFraction(t);
	return 0;
}