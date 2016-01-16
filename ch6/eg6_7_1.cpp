
class Token;
class Token_stream
{
	public:
		//user interface
		Token_stream();		//make a Token_stream that reads from cin
		Token get();		//get a Token
		void putback(Token t);	//put a Token back
	private:
		//implementation details
		//(not directly accessible to users of Token_stream)
		bool full;			//is there a Token in the buffer?
		Token buffer;
};

Token_stream::Token_stream()
	:full(false),buffer(0)

void Token_stream::putback(Token t)
{
	if(full)
	{
		std::cout << "putback() into a full buffer." << std::endl;
		return ;
	}
	buffer = t;	//copy t to buffer
	full = true;//buffer is now full
}

Token Token_stream::get()
{
	if(full)	//do we have a Token ready?
	{
		//remove Token from buff
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;
	switch(ch)
	{
		case ';':
		case 'q':
		case '(':case')':case'+':case'-':case'*':case'/':case'%':
			return Token(ch);
		case '.':
		case '0':case'1':case'2':case'3':case'4':
		case '5':case'6':case'7':case'8':case'9':
		{
			cin.putback(ch);
			double val;
			cin >> val;
			return Token('8',val);
		}
		default:
		{
			cerr << "Bad Token.\n";
		}
	}
}
