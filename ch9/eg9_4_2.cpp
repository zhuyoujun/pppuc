

struct Date
{
	int y,m,d;	//year, month, day
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	//check the value and assign
}

void Date::add_day(int n)
{
	//increase n days and check valid adding
}

int main()
{
	//Date my_birthday;
	Date today(12,24,2007);
	Date last(2000,12,31);
	Date christmas = Date(1976,12,24);

	last.add_day(1);
	return 0;
}
