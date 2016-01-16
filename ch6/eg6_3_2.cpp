#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter expression(we can handle +,-,*,and /):";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval;
	if(!cin)
	{
		cout << "No first operand!" << endl;
	}
	while(cin >> op &&cin >> rval)
	{
		if(op == '+')
		{
			lval += rval;
		}
		else if(op == '-')
		{
			lval -= rval;
		}
		else if (op == '*')
		{
			lval *= rval;
		}
		else if(op == '/')
		{
			lval /= rval;
		}
	}	
	cout << "Result: " << lval << endl;
	return 0;
}
