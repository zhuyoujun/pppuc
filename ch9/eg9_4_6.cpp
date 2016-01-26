#include<iostream>

class Date
{
public:
	class Invalid {};
	Date(int _y, int _m, int _d);
	int month() {return m;}
	//...
private:
	int y,m,d;	//year, month, day
	bool check();	//return true if date is valid
};

Date::Date(int _y, int _m, int _d)
	:y(_y),m(_m),d(_d)
{
	//check the value is valid or not.
	if(!check()) throw Invalid();
}

bool Date::check()
{
	if(m < 1 || m > 12) { return false; }
	else if (d < 1 || d > 31 ) {return false;}
	else{ return true;}
}


int main()
{
	//Date my_birthday;
	Date birthday(1970,12,30);
	Date last(1970,1,1);
	return 0;
}
