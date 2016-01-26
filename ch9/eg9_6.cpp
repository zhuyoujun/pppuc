#include<iostream>
#include<vector>
using namespace std;
enum Month
{
	jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

Month int_to_month(int x)
{
	if(x<jan || x > dec) { std::cerr << "bad month.\n"; }
	return Month(x);
}

Month operator++(Month& m)
{
	m = (m==Month::dec)?jan:Month(m+1);
	return m;
}

vector<string> month_tbl;
ostream& operator<<(ostream& os, Month m)
{
	return os << month_tbl[m];
}

//int operator+(int, int);
Vector operator+(const Vector&,const Vector&);
Vector operator+=(const Vector&, int);

int main()
{
	Month m = sep;
	++m;		//m becomes oct
	++m;		//m becomes nov
	++m;		//m becomes dec
	++m;		//m becomes jan

	//output opearatpr <<
	
	return 0;
}
