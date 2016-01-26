
enum Month
{
	jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

enum Day
{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday
};

Month int_to_month(int x)
{
	if(x<jan || x > dec) { std::cout << "bad month.\n"; }
	return Month(x);
}

void f(int m)
{
	Month mm = int_to_month(m);
}

int main()
{
	Month m = feb;
	//m = 7;			//error
	int n = m;		
	Month mm = Month(7);
	return 0;
}
