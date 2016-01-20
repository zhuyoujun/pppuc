#include<iostream>
#include<vector>

using namespace std;



	//declaration
	int a = 7;
	vector<double> v;
	double sqrt(double) {/* ... */} //define

	//define
	double sqrt(double);//declaration
	extern int i;		//declaration

	double sqrt(double d) {} 	//definition
	double sqrt(double d) {}	//double definition,error

	int x = 7;
	extern int x;`
	extern int x;`
	
	double expression();

	double primary()
	{
		// ...
		expression();
		// ...
	}

	double term()
	{
		//...
		primary();
		//...
	}

	double exression()
	{
		//...
		term();
		//...
	}
