//convert strings to float  numbers
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>  //make sure not to forget this directive
using namespace std;

int main()
{
	string sentence;
	double decimalNum;
	
	cout <<"Please type in your sentence: "<<'\n';
	getline(cin,sentence,'\n');
	
	cout <<"Your sentence is: "<<sentence<<'\n';
	
	decimalNum=atof(sentence.c_str()); //this is how to convert a string to an float number 
	//variable.c_str() converts the string. 
	//atof()  is a fucntion converting a string to float.
	cout <<"Your float number is: "<<decimalNum<<'\n';    //display float number
	
	
	
	
	return 0;
}
