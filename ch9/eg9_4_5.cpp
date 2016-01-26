#include<iostream>

class Date
{
public:
	Date(int _y, int _m, int _d);
	int month() {return m;}
	//...
private:
	int y,m,d;	//year, month, day
};

Date::Date(int _y, int _m, int _d)
{
	y = _y;
	m = _m;
	d = _d;
	//check the value and assign
}

void f(Date d1, Date d2)
{
	std::cout << d1.month() << ' ' << d2.month() << std::endl;
}

int main()
{
	//Date my_birthday;
	Date birthday(1970,12,30);
	Date last(1970,1,1);
	f(birthday,last);
	return 0;
}
