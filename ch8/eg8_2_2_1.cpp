

int a;
double d = 7;
vector<int> vi(10);

const int x = 7;	// using = init
const int x2(9);	// using () init
const int y;		//error:no initializer

void f(int z)
{
	int x; 			//uninitialized

	x = 7;			//give x a value
}

void f(int z)
{
	int x;			//uninit

	if(z > x)		// x uninitialized
	{
		//
	}

	//...
	x =  7; 		//assign
	//...
}
