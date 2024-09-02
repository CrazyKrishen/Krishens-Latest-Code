//toupper and tolower
#include <iostream>
using namespace std;

int main()
{
	char letter;
	
	cout <<toupper('a')<<endl;   //will just show you a number of which interger value is assigned to 'a'.
	
	letter=toupper('a');  //passing the number to the declared character variable so the compiler can recognize what integer the letter is located and 
	//capitalize it(toupper).
	
	cout<<letter;
	
	return 0;
}

//page 393 shows different functions there.
