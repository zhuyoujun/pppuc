/*
Try this:
convert yen,euros,pounds into dollars.
*/

#include<iostream>
using namespace std;

int main()
{
	const double yens_per_dollar = 0.0085; // number of yen per dollars.
	const double euros_per_dollar = 1.0883; // number of euro per dollars.
	const double pounds_per_dollar = 1.4583; // number of pounds per dollars.
	int money = 1;
	char unit = 0;
	std::cout << "Please enter a money followed by a unit(y or e or p):\n";
	cin >> money >> unit;

	if(unit == 'y')
	{
		cout << money << "yen == " << yens_per_dollar*money << "dollar\n";
	}
	else if(unit == 'e')
	{
		cout << money << "euro == " << euros_per_dollar*money << "dollar\n";
	}
	else if(unit == 'p')
	{
		cout << money << "pounds == " << pounds_per_dollar*money << "dollar\n";
	}	
	else
	{
		cout << "the unit "<< unit << " is unknow!\n";
	}
	return 0;
}



