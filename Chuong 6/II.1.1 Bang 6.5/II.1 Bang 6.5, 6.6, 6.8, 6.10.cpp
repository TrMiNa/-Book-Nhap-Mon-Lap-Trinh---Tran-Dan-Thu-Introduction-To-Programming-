const int minYear = 1900, maxYear = 10000;
int checkLeapYear(int year)
{
	int result;
	if (year<minYear || year>maxYear)
		result = -1;
	else if (year % 4 != 0)
		result = 0;
	else if (year % 100 != 0)
		result = 1;
	else if (year % 400 == 0)
		result = 1;
	else
		result = 0;
	return result;
}

int checkLeapYear(int year)
{
	if (year<minYear || year>maxYear)
		return -1;
	else
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 != 0);
}

int nDayOfMonth(int month, int year)
{
	int nDay;
	int isLeap = checkLeapYear(year);
	if (isLeap == -1 || month < 1 || month>12)
		nDay = -1;
	else
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			nDay = 31; break;
		case 4: case 6: case 9: case 11:
			nDay = 30; break;
		case 2:
			if (isLeap)
				nDay = 29;
			else
				nDay = 28;
		}
	return nDay;
}

bool nextDay(int &day, int &month, int &year)