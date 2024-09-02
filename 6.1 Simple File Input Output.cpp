//Reads three numbers from the file infile.dat, sums the numbers,
//and writes the sum to the file outfile.dat.
//(A better version of this program will be given in  Display 6.2.)
#include <fstream>
using namespace std;

int main()
{
	
	ifstream inStream;     //Declaring our own input stream (our own cin)
	ofstream outStream;    //Declaring our own output stream (our own cout)
	
	inStream.open("infile.dat");     //Here we are opening the data from another file. Link of that file is wrtitten in the bracets
	outStream.open("outfile.dat");   //Here we are opening the data from another file. Link of that file is wrtitten in the bracets
	
	int first, second, third;
	
	inStream >> first >> second >> third;
	outStream << "The sum of the first 3 numbers in infile.dat is "<< (first + second + third);
	
	
	inStream.close( );   //Here we close that file
	outStream.close( );  //Here we close that file
	 
	
	
	return 0;
}
