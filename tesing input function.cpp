//tesing input function
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	int num1, num2,num3,num4,num5,num6,num7,num8,num9,num10;
	inFile.open("numbers.txt1");
	
	if(inFile.fail())
	{
		cout <<"Your file failed to open!"<<endl;
		
	}
	else
	{
	  
	cout <<"File opened"<<endl;
	}
	
	
	inFile>>num1>> num2>> num3>> num4>> num5>>num6>>num7>>num8>>num9>>num10; //you must declare variables for each value for each given data in the word document
	//when reading from it.
	
	inFile.close();  //make sure you close the file after reasing into the new variables.
	
	cout<<num1<<endl; 
	cout<<num2<<endl;
	cout<<num3<<endl;
	cout<<num4<<endl;
	cout<<num5<<endl;
	cout<<num6<<endl;
	cout<<num7<<endl;
	cout<<num8<<endl;
	cout<<num9<<endl;
	cout<<num10<<endl;
	
	return 0;
}

