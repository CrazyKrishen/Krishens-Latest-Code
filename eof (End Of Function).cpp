//eof (End Of Function) used in a program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream infile;
	
	infile.open("inputdata.txt");
	
	if(infile.fail())
	{
		cout <<"File is not opened!"<<endl;
		exit(1);
	}
	
	string sentence;
	
	while(!infile.eof())   
	{
		getline(infile, sentence);
		
		cout <<sentence;
	}
	
	infile.close();
	
	return 0;
}

//eof(End Of File) determines if everything is read from that file. Its a function used in the program.
//This is a Boolean expression that can be used to control a 'while loop', a 'do-while loop', or an 'if-else statement'.
//shown how it is used, see page 387.
//Since we usually want to test that we are not at the end of a file, a call to the member function eof is typically used with a not in front of it. 
