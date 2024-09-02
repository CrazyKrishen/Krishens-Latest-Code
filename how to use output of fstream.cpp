//how to use output of fstream
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream outFile;   //Declare a variable here from the output stream (ofstream)
	
	outFile.open("outputBank.txt");  //Name the file here
	
	if(outFile.fail())
	{
		cout <<"The file did not open!"<<endl;
	}
	else
	{
		cout <<"File opened! And its writing in the file you created called 'outputBank.txt'"<<endl;
	}
	
	outFile <<"Look at me now bitch!"<<endl;  //Before you close, put the details of what you want in the file.
	
	outFile.close();   //Now close the file.
	
	return 0;
}
