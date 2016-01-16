#include<iostream>
#include<exception>
using namespace std;

class Token
{
public:
	char kind;
	double value;
	Token(char ch)	//make a Token from a char
		:kind(ch),value(0) {}

	Token(char ch,double val)	//make a Token from a char and a value
		:kind(ch),value(val) {}
};

Token get_token(); 		//read characters and compose tokens
double primary();		//deal with numbers and parentheses
double expression(); 	//deal with + and -
double term();			//deal with *,/,and %

/*
 * version 1.0
double expression() 	//deal with + and -
{
	double left = expression();		//read and evaluate an Expression
	Token t = get_token();			//get the next token
	switch(t.kind)					//see which kind of token it is
	{
		case '+':
			return left + term();

		case '-':
			return left - term();

		default:
			return left;
	}
}
*end version 1.0
*/

/*
//version 1.1
double expression() 	//deal with + and -
{
	double left = term();			//read and evaluate an Term
	Token t = get_token();			//get the next token
	switch(t.kind)					//see which kind of token it is
	{
		case '+':
			return left + expression();

		case '-':
			return left - expression();

		default:
			return left;
	}
}
//end version 1.1
*/

/*
 version 1.2
 */
double expression() 	//deal with + and -
{
	double left = term();			//read and evaluate an Term
	Token t = get_token();			//get the next token
	while(true)
	{
		switch(t.kind)					//see which kind of token it is
		{
			case '+':
			{
				left += term();
				t = get_token();
				break;
			}

			case '-':
			{
				left -= term();
				t = get_token();
				break;
			}

			default:
				return left;
		}
	}
}

double term()			//deal with *,/,and %
{
	double left = primary();
	Token t = get_token();
	while(true)
	{
		switch(t.kind)
		{
			case '*':
			{
				left *= primary();
				t = get_token();
				break;
			}

			case '/':
			{
				left /= primary();
				t = get_token();
				break;
			}
/*
			case '%':
			{
				left %= primary();
				t = get_token();
				break;
			}
*/
			default:
				return left;
		}
	}
}

double primary()		//deal with numbers and parentheses
{
	Token t = get_token();
	switch(t.kind)
	{
		case '(':
		{
			double d = expression();
			Token t1 = get_token();
			if(t1.kind != ')')
			{
				std::cout << "error,expect )" << std::endl;
			}
			return d;
		}

		case '8':
		{
			return t.value;
		}

		default:
			std::cout << "expect primary" << std::endl;
	}
}


int main()
{
	try
	{
		while(std::cin)
		{
			std::cout << expression() << std::endl;
		}
	}
	catch(exception& e)
	{
		cerr << e.what() << std::endl;
		return 1;
	}
	catch(...)
	{
		cerr << "exception \n";
		return 2;
	}
}
