#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	cout << "input filename: \n";
	string name;
	cin >> name;
	ifstream ist(name.c_str());
	if(!ist)
	{
		cerr << "file isn't existing!\n";
	}
	vector<int> vi;
	int value;
	while(ist>>value)
	{
		vi.push_back(value);
	}

	cout << "the number of ints: " << vi.size() << endl;

	cout << "output filename: \n";
	string name_out;
	cin >> name_out;
	ofstream ost(name_out.c_str());
	for(size_t i = 0; i < vi.size(); ++i)
	{
		ost << vi[i] << endl;
	}
	return 0;
}
