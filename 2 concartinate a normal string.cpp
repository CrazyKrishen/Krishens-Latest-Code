//concatenation  and size a normal string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name1="Hello";
	string name2="World";
	string name3;
	int len;
	string copy;
	
	
	copy=name1;   //process of coopying string1
	cout <<"Copied string: "<<copy<<'\n';  //copied string displayed  
	
	name3=name1+name2;  //process of concatenation 
	cout <<"concatenated normal string: "<<name3<<'\n'; //concatenated string displayed 
	
	
	
	len=name3.size();   //process of getting the size from a string
	cout <<"Size of the word: "<<len<<'\n';    // Display size of the string 
	
	
	
	return 0;
}
