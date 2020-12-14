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
Fraction add(Fraction p, Fraction q)
{
	Fraction r;
	r.num = p.num * q.denom + q.num * p.denom;
	r.denom = p.denom * q.denom;
	return r;
}
Fraction sub(Fraction p, Fraction q)
{
	q.num = -q.num;
	return add(p, q);
}
void showFraction(Fraction p)
{
	reduce(p);
	cout << p.num << "/" << p.denom;
}
int main()
{
	Fraction r = { 4, 3 }, s = { 3,5 };
	Fraction t;
	t = add(r, s);
	showFraction(t);
	cout << endl;
	t = sub(add(r, r), s);
	showFraction(t);
	return 0;
}