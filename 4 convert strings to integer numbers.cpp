//convert strings to integer numbers
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>  //make sure not to forget this directive
using namespace std;

int main()
{
	string sentence;
	int numbers;
	
	
	cout <<"Please type in your sentence: "<<'\n';
	getline(cin,sentence,'\n');
	
	cout <<"Your sentence is: "<<sentence<<'\n';
	
	numbers=atoi(sentence.c_str()); //this is how to convert a string to an integer
	//variable.c_string() converts the string. 
	//atoi()  is a fucntion converting a string to integer.
	cout <<"Your integer number is: "<<numbers<<'\n';    //display integer
	
	
	
	
	return 0;
}
