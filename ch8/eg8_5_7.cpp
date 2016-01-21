
void f(T x);
f(y);
T x = y;

void f(double);

void g(int y)
{
	f(y);
	double x(y);	//convert int to double
}

void ff(int);

void gg(double x)
{
	ff(x);			// convert double to int.
}

void ggg(double x)
{
	int x1 = x;		//truncate x
	int x2 = int(x);

	ff(x1);
	ff(x2);

	ff(x);			//truncate x
	ff(int(x));
}


