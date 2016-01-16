#include<iostream>
using namespace std;

int square(int x)
{
	return x * x;
}

void write_sorry()
{
	cout << "Sorry\n";
}

void print_square(int v)
{
	cout << v <<'\t'<< v*v << '\n';
}

int main()
{
	cout << square(2) << '\n';  // 4	
	cout << square(10) << '\n'; //100
	print_square(2);
	print_square(10);
	//square(2);
	//int v1 = square();
	//int v2 = square;
	//int v3 = square(1,2);
	//int v4 = square("two");
	
	return 0;
}



