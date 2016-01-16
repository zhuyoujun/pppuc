#include<iostream>
using namespace std;

class Token
{
public:
	char kind;
	double value;
	Token(char ch)	//make a Token from a char
		:kind(ch),value(0) {}

	Token(char ch,double val)	//make a Token from a char and a value
		:kind(ch),value(val) {}
};

int main()
{
	Token t1('+');
	Token t2('8',3.14);
	cout << " t1: (" << t1.kind <<"," << t1.value << ")" << endl;
	cout << " t2: (" << t2.kind <<"," << t2.value << ")" << endl;
	
	return 0;
}
