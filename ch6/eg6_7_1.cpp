
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
};
