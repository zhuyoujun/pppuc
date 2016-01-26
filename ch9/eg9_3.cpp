#include<iostream>

class X
{
	int m;
	int mf(int);
public:
	int f(int i);
};

int X::mf(int v)
{
	int old = m;
	m = v;
	return old;
}

int X::f(int i)
{
	return mf(i);
}

int main()
{
	X x;
	//int y = x.mf(2);
	int y = x.f(2);
	return 0;
}
