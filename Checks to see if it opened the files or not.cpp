//Reads three numbers from the file infile.dat, sums the numbers
//and writes the sum to the file outfile.dat
//read page 352 do descibe each funtion in this program
#include <fstream>  //for I/O files
#include <iostream>  //for cout
#include <cstdlib>    //for exit(1)
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("infile.dat");
	if(inStream.fail( ))
	{
		cout << "Input file opening failed.\n";
		
		exit(1);
	}
	
	outStream.open("outfile.dat");
	if(outStream.fail( ))
	{
		cout << "Output file opening failed.\n";
		exit(1);
	}
	
	
	int first, second, third;
	
	inStream >> first >> second >> third;
	
	outStream << "The sum of the first 3 numbers in infile.dat is " << (first + second + third)<< endl;
	
	inStream.close( );
	outStream.close( );
    
	
	return 0;
}
