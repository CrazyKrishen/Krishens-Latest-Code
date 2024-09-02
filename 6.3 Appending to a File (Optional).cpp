//Appends data to the end of the file data.txt.  page 354
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	cout << "Opening data.txt for appending.\n";
	ofstream fout;
	
	fout.open("data.txt", ios::app);   
	
	if (fout.fail( ))
	{
		cout << "Input file opening failed.\n";
		
		exit(1);
	}
	
	fout << "5 6 pick up sticks. 7 8 ain't C++ great!\n";   //Appending simply means to keep writng the same line (fout in this case)
    // is saved more that once in the document you created(data.txt). The more you execute the program, the more lines it saves in the document.
    
	fout.close( );  //Dont forget to close afterwards.
	
	cout << "End of appending to file.\n";
	
	
	return 0;
}
