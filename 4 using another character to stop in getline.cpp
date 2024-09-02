//using another character to stop in getline
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	
	cout <<"Please enter sentence, it will stop after a question mark: ";
	getline(cin,sentence,'?');   //instead of '\n' for new line, a question mark will stop the program.
	
	cout <<sentence;
	
	return 0;
}
