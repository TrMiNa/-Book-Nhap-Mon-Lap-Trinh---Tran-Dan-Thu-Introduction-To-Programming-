int isPrime(int a)
{
	if (a <= 1)
		return false;
	switch (a)
	{
		case 2:
			return true;
		default:
			for (int i = 2; i * i <= a; i++)
				if (a % i == 0)
					return false;
	}
	return true;
}