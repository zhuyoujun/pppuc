

double fct(int a, double d);
double fct(int a, double d)
{
	return a * d;
}

int current_power();

void increase_power(int level);

int my_find(vector<string> vs, string s, int hint);
int my_find(vector<string>, string, int);

int my_find(vector<string> vs, string s, int hint)
{
	//search for s in vs starting at hint
	if(hint<0 || hint < vs.size()) 
	{
		hint = 0;
	}
	for(int i = hint; i < vs.size(); ++i)
	{
		if(vs[i] == s) { return i; }
	}

	if(hint > 0)
	{
		for(int i = 0; i < hint; ++i)
		{
			if(vs[i] == s) { return i}
		}
	}

	return -1;
}

int my_find(vector<string> vs, string s, int)
{
	for(int i = 0; i < vs.size(); ++i)
	{
		if(vs[i] == s) { return i; }
	}
	return -1;
}

