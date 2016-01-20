

void print(vector<double> v)
{
	cout << "{";
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i];
		if(i != v.size() - 1) {cout << ",";}
	}
	cout << "}\n";
}

void print(const vector<double> &v)
{
	cout << "{";
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i];
		if(i != v.size() - 1) {cout << ",";}
	}
	cout << "}\n";
}

void print(const vector<double> &v)
{
	//...
	v[i] = 7;	//error: v is a const (not a mutable).
	//...
}

void f(int x)
{
	vector<double> vd1(10);
	vector<double> vd2(1000000);
	vector<double> vd3(x);		//vector of some unknown size.

	print(vd1);
	print(vd2);
	print(vd3);
}

int my_find(vector<string> vs, string s);
int my_find(const vector<string>& vs, const string& s);
