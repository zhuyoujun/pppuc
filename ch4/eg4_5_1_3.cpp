#include<iostream>
using namespace std;

int square(int x)
{
	int total = 0;
	for(int i = 0; i < x;++i)
	{
		total += x;
	}	
	return total;
}

int main()
{
	cout << square(2) << '\n';  // 4	
	cout << square(10) << '\n'; //100
	
	return 0;
}



