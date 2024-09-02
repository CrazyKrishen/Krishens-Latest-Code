//Character I/O Solution for the whole line of charaters to be read.
#include <iostream>
using namespace std;

int main()
{
	char a,b,c;
	
	cout << "Enter a line of input and I will echo it:\n"; 
	char symbol;
	
	do                         //Here you must use a do while loop
	{                          //it reads everything on the full line that you typed. Solution page 373.
		 cin.get(symbol);     //Here get input while in the loop.
		 cout << symbol;      //dispaly while in the loop.NOTE PAGE 374 is very imprtant
	}
	while(symbol != '\n');
	
	
	
	return 0;
}
