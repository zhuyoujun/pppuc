
#include<iostream>

int main()
{
	int length = 20;	
	int width = 40;	
	int area = length * width;
	length = 99;
	int perimeter = (length + width) * 2;
	
	//const
	const double pi = 3.14159;
	//pi = 7; //error
	int v = 2*pi;

	const int max = 17;
	int val = 19;
	
	int a = 0;
	++a;
	a += 1;
	a = a + 1;

	double d = 2.5;
	int i = 2;

	double d2 = d/i; // d2 == 1.25;
	int i2 = d/i;	// i2 == 1;	

	double dc;
	cin >> dc;
	double df = 9/5*dc + 32;
	
	double df2 = 9.0/5*dc + 32;

	
}
