#include<iostream>
using namespace std;

class Token
{
public:
	char kind;
	double value;
};

int main()
{
	Token t;
	t.kind = '+';
	Token t2;
	t2.kind = '8';
	t2.value = 3.14;

	Token tt = t;
	if(tt.kind != t.kind)
	{
		cout << "impossible!" << endl;
	}
	t = t2;
	cout << t.value << endl;
	
	return 0;
}
