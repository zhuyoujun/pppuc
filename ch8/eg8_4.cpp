void f()
{
	g();	//error g() isn't (yet) in scope
}

void g()
{
	f();	//right f() is in scope.
}

void h()
{
	int x = y;	//error
	int y = x;	//ok
	g();		//ok
}

void f(int x)		//f is global;x is local
{
	int z = x + 7;	// z is local
}

int g(int x)		//g is global; x is local
{
	int f = x + 2;	//f is local.
	return 2 * f;
}

int max(int a, int b) // max is global, a and b are local.
{
	return (a>=b) ? a : b;
}

int abs(int a)
{
	return (a < 0) ? -a : a;	//max is global.
}

int max(int a, int b)
{
	int m;
	if(a>=b)
	{
		m = a;
	}
	else
	{
		m = b;
	}
	return m;
}


class My_vector
{
	vector<int> v;
public:
	int largest()
	{
		int r = 0;
		for(int i = 0; i < v.size(); ++i)
		{
			r = max(r,abs(v[i]));
		}
		return r;
	}
}

int x;
int y;

int f()
{
	int x;	//local variable
	x = 7;
	{
		int x = y;	//
		++x;
	}
	++x;
	return x;
}

//-------------------------------------------
class C
{
public:
	void f();
	void g()	//a member function
	{
		//...
	}
	//...
};

void C::f()	
{
	//...
}

//
class C
{
public:
	struct M
	{
		//;
	};

	//...
};

void f()
{
	class L
	{
		//...
	};
	//...
}

void f()
{
	void g()	//illegal
	{
		//
	}
}

void f(int x, int y)
{
	if(x>y)
	{
		//...
	}
	else
	{
		//...
		{
			//...
		}
	}
}

//-------------------------------------------
