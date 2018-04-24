struct tm* curTime(void)
{
	time_t t;
	time(&t);
	return localtime(&t);
}

int valLeapYear(int *y)
{
	return !(*y%4) ? (!(*y%100) ? !(*y%400) : 1) : 0; //A leap year is divisible by 4 ONLY or 4 AND 100 AND 400
}

int monthDays(int month)
{
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return 28;
		default:
			return -1;
	}
}

int valDate(int d, int m, int y)
{
	int monthsDays[] = {31, 28 + valLeapYear(&y), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	return ((d > 0) && (d <= monthsDays[m - 1]) && (m > 0) && (m < 13)); //months 1 - 12, days 1 - 31 and day in corresponding days range for month
}

int diffdate(Date s, Date e) //won't work for dates earlier than Jan. 1 1970 (the unix timestamp)
{
	struct tm start = {0, 0, 0, 0, 0, 0, 0, 0}, end = start;

	end.tm_mday = e.d;
	end.tm_mon = e.m - 1;
	end.tm_year = e.y - 1900;

	start.tm_mday = s.d;
	start.tm_mon = s.m - 1; 
	start.tm_year = s.y - 1900;

	return (int)difftime(mktime(&end), mktime(&start))/86400;
}

int diffStructTm(struct tm s, struct tm e)
{
	return (int)difftime(mktime(&e), mktime(&s))/86400;
}

struct tm* futureDate(int d, int m, int y, int days)
{
	struct tm date = {0, 0, 0, 0, 0, 0, 0, 0};
	time_t t;
	date.tm_mday = d;
	date.tm_mon = m - 1;
	date.tm_year = y - 1900;
	t =  mktime(&date) + (days * 86400);
	return localtime(&t);
}

//Based on dow() function devised by Tomohiko Sakamoto in 1993
int dow(Date d)
{
	int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

	d.y -= d.m < 3;

	return (d.y + d.y/4 - d.y/100 + d.y/400 + t[d.m - 1] + d.d) % 7;
}

void readDate(Date *d,int yea, int mon,int day)
{
	if(day==-1)
	{
		puts("\nDay:");
		fflush(stdin);scanf("%i",&d->d);
	}
	else if(day==-2)
	{
		//d->d= monthDays(d->m) + ((d->m == 2) ? valLeapYear(&d->y) : 0);
	}
	else
	{
		d->d=day;
	}

	if(mon==-1)
	{
		puts("\nMonth:");
		fflush(stdin);scanf("%i",&d->m);
	}
	else
	{
		d->m=mon;
	}

	if(yea==-1)
	{
		puts("\nYear:");
		fflush(stdin);scanf("%i",&d->y);
	}
	else
	{
		d->y=yea;
	}

	/*
	if(day==-1)
	{
		puts("\nDay:");
		fflush(stdin);scanf("%i",&d->d);
	}
	else */if(day==-2)
	{
		d->d= monthDays(d->m) + ((d->m == 2) ? valLeapYear(&d->y) : 0);
	}/*
	else
	{
		d->d=day;
	}*/

	d->representation= d->d + 100* d->m + 10000*d->y;
}

void printDate(Date d)
{
	printf("\n%i\\ %i\\ %i",d.d,d.m,d.y);
}

//void readStructDate(struct tm dT)
//{
//	puts("\n");
//	puts("\n");
//	puts("\n");
//dT.	puts("\n");
//	puts("\n");
//
//}