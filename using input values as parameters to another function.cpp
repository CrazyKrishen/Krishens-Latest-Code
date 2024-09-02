//using input values as parameters to ansother function
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


void openFile(string x, ifstream& ifileP)  //youve got to declare these parameters inside the bracets
{
	int y;
	
	while(ifileP >>y)
	{
		cout <<y<<'\n';
		
	}
	
}

int main()
{

	
	ifstream ifile;
	
	ifile.open("numbers.txt");    //always open the file first.
	
	if(ifile.fail())             //do the test 
	{
		cout <<"File not opened \n";
		
	}
	else
	cout <<"Opened! \n";
	
	openFile("numbers.txt", ifile);	//Here youve got to file documents name and also the opened file 
	
	
	return 0;
}

