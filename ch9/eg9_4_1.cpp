

struct Date
{
	int y;	//year
	int m;	//month of year
	int d;	//day of month
};

void init_day(Date &dd,int y, int m, int d)
{
	//
	//
}

void add_day(Date &dd, int n)
{
	//
}

void f()
{
	Date today;
	init_day(today,12,24,2005);
	add_day(today,1);
}

int main()
{
	Date today;
	today.y = 2005;
	today.m = 24;
	today.d = 12;

	Date x;
	x.y = -3;
	x.m = 13;
	x.d = 32;

	Date y;
	y.y = 2000;
	y.m = 2;
	y.d = 29;
	return 0;
}
