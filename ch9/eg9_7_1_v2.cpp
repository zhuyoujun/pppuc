

class Year
{
	static const int min = 1800;
	static const int max = 2200;
public:
	class Invalid{};
	Year(int x):y(x) {if (x < min || x > max) throw Invalid();}
	int year() { return y;}
private:
	int y;		//year
};
class Date
{
public:
	enum Month
	{
		jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	};

	Date(Year yy, Month mm, int dd);
private:
	Year y;
	Month m;	//
	int d;		//day
};

Date::Date(Year yy, Month mm, int dd)
	:y(yy),m(mm),d(dd)
{

}

int main()
{
	//Date dx1(1988,4,3);
	//Date dx2(1988,4,Date::mar);
	//Date dx3(4,Date::mar,1988);
	//Date dx4(Date::mar, 4 , 1988);
	Date dx5(1988, Date::mar, 30);
	return 0;
}
