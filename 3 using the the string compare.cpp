//using the the string compare
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[6], s2[6];
	int value;
	
	strcpy(s1,"Black");  //initializing to black
	strcpy(s2,"Black");  //initializing to black
	
	value=strcmp(s1,s2);
	//Here if 'value'=0 they are the same 
	//Here if 'value'<0 or 'value'>0 they are not the same 
	
	if(value==0)
	{
		cout <<"They are the same! "<<'\n';
	}
	else
	{
		cout <<"They are not the same!"<<'\n';
	}
	
	
	
	return 0;
}
