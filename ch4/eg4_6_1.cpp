#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(6);
	v[0] = 5;
	v[1] = 7;
	v[2] = 9;
	v[3] = 4;
	v[4] = 6;
	v[5] = 8;

	vector<string> philosopher(4);	//vector of 4 strings.
	philosopher[0] = "Kant";
	philosopher[1] = "Plato";
	philosopher[2] = "Hume";
	philosopher[3] = "Kierkegaard";
	
	//philosopher[2] = 99;
	// v[2] = "Hume";

	vector<double> vd(1000,-1.2);	//vector of 1000 doubles initialized to -1.2.
	//vd[2000] = 4.7 ; //run-time error

	vector<double> vd1;
	vd1.push_back(2.7);
	vd1.push_back(5.6);
	vd1.push_back(7.9);

	for(int i = 0; i < vd1.size(); ++i)
	{
		cout << "vd1[" << i << "]==" << vd1[i] << "\n";
	}
}
