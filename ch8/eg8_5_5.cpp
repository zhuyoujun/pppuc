
void init(vector<double>& v)		//pass-by-reference
{
	for(int i = 0; i < v.size(); ++i)
	{
		v[i] = i;
	}
}

void g(int x)
{
	vector<double> vd1(10);
	vector<double> vd2(1000000);
	vector<double> vd3(x);

	init(vd1);
	init(vd2);
	init(vd3);

}

int i = 7;
int& r = i;
r = 9;
i = 10;
cout << r <<' ' << i << '\n';

vector<vector<double>> v;	// vector of vector of double
double val = v[f(x)][g(y)];
double& val = v[f(x)][g(y)];

var = var/2 + sqrt(var);

int f(int& x)
{
	x = x + 1;
	return x;
}

int main()
{
	int xx = 0;
	cout << f(xx) << endl;
	cout << xx << endl;

	int yy = 0;
	cout << f(yy) << endl;
	cout << yy << endl;
}

//------------------------------------------------------------

void swap(double& d1, double& d2)
{
	double temp = d1;
	d1 = d2;
	d2 = temp;
}

int main()
{
	double x = 1;
	double y = 2;
	cout << "x== " << x << "y== " << y << '\n'; // x == 1, y == 2
	swap(x,y);
	cout << "x== " << x << "y== " << y << '\n'; // x == 2, y == 1
}
