//test using 2 variables of string the the same cin line
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	
	cout <<"Enter string: "<<'\n';
	getline(cin,s1)>>s2;
	
	cout <<s1<<'\n';
	cout <<s2<<'\n';
	
	//after clicking enter, that would be an indication of the second variable then dispalys them
	//separately
	
	return 0;
}
