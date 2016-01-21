

void f(int a, int& r, const int& cr)
{
	++a;	//change the local a
	++r;	//change the object referred to by r
	++cr;	//error: cr is const
}


void g(int a, int& r, const int& cr)
{
	++a;		//change the local a
	++r;		//change the object referred to by r
	int x = cr;	//read the object referred to by cr
}

int incr1(int a)
{
	return a + 1;
}

void incr2(int& a)
{
	++a;
}

//make each element in v1 the larger of the corresponding
//elements in v1 and v2;
//similarly,make each element of v2 the smaller.
void larger(vector<int>& v1, vector<int>& v2)
{
	if(v1.size() != v2.size())
	{
		cout << "larger(): different sizes."
	}

	for(int i = 0; i < v1.size(); ++i)
	{
		if(v1[i] < v2[i])
		{
			swap(v1[i],v2[i]);
		}
	}
}

void f()
{
	vector<int> vx;
	vector<int> vy;
	// read vx and vy from input
	larger(vx, vy);

	//...
}

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;

	g(x,y,z);
	g(1,2,3); //error: reference argument r needs a variable to refer to
	g(1,y,3);

	int t = 7;
	t = incr1(t);
	incr2(t);
}

