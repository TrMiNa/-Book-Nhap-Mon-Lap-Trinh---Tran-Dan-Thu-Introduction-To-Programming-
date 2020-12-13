bool Increasing(double a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}

bool IncreasingVer2(double a[], int n)
{
	while (--n)
	{
		if (a[n - 1] > a[n])
			return false;
	}
	return true;
}