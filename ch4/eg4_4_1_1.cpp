#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	int a2 = 7;
	std::cout << "Please enter two integers\n";
	cin >> a >> b;

	if(a < b)
	{
		cout << "max(" << a << "," << b << ") is " << b << "\n";
	}
	else
	{
		cout << "max(" << a << "," << b << ") is " << a << "\n";
	}
	
}



