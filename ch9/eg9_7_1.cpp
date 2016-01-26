
class Date
{
public:
	enum Month
	{
		jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	};

	Date(int yy, Month mm, int dd);
private:
	int y;		//year
	Month m;	//
	int d;		//day
};

Date::Date(int yy, Month mm, int dd)
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
