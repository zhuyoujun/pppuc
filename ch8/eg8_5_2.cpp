

T f()
{
	V v;
	//...
	return v;
}

T x = f();

double my_abs(int x)
{
	if(x < 0)
	{
		return -x;
	}
	else if( x > 0)
	{
		return x;
	}
	//error: no return value if x == 0
}

void print_until_s(const vector<string> v, const string quit)
{
	for(int i = 0; i < v.size(); ++i)
	{
		if(v[i] == quit) {return;}
		cout << v[i] << '\n';
	}
}


