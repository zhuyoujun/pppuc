#include<iostream>
using namespace std;

int main()
{
	const double cm_per_inch = 2.54; // number of centimeters in an inch
	int length = 1;
	char unit = 0;
	std::cout << "Please enter a length followed by a unit(c or i):\n";
	cin >> length >> unit;

	if(unit == 'i')
	{
		cout << length << "in == " << cm_per_inch*length << "cm\n";
	}
	else
	{
		cout << length << "cm == " << length / cm_per_inch << "in\n";
	}
	
}


