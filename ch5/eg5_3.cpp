

int area(int length, int width);

int s1 = area(7;	//error: ) missing
int s1 = area(7)	//error: ; missing
Int s1 = area(7);	//error: Int is not a type.
int s1 = area('7);	//error: non-terminated character(' missing)

int x0 = arena(7);	//error:arena type not exist.
int x1 = area(7);	//error:missing the second argument.
int x2 = area("seven",2);//error:the first argument's type is error.

int x4 = area(10,-7); //right,but the area's width is negative int.
int x5 = area(10.7,9.3);	//right,but call area(10,9)
char x6 = area(100,9999);	//right,but truncates the result.
