long GreatestCommonDivisor(long a, long b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (a != 0 && b != 0)
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	return a + b;
}