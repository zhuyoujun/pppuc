#include<iostream>

class Date
{

	int y,m,d;	//year, month, day
public:
	Date(int _y, int _m, int _d);
	void add_day(int n);
	int month() {return m;}
	int day() {return d;}
	int year() {return y;}
};

Date::Date(int _y, int _m, int _d)
{
	y = _y;
	m = _m;
	d = _d;
	//check the value and assign
}

void Date::add_day(int n)
{
	//increase n days and check valid adding
}

int main()
{
	//Date my_birthday;
	Date birthday(1970,12,30);
	//birthday.m = 14; // error
	std::cout << birthday.month() << std::endl;
	return 0;
}
