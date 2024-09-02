//cstring to normal string  page522
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[5];
	string variableString;
	 
	variableString="Hello";   //initialization of normal string
	 
	strcpy(a,variableString.c_str( )); //normal string copied to cstring varrable
	
	
	
	cout <<"Cstring: "<<a<<'\n';
	cout <<"Cstring variable coied: "<<variableString<<'\n';
	
	//following are illegal to convert a normal string to cstring:
	//strcpy(aCString, stringVariable); //ILLEGAL
	//aCString = stringVariable; //ILLEGAL
	//aCString = stringVariable.c_str( ); //ILLEGAL
	
	return 0;
}
