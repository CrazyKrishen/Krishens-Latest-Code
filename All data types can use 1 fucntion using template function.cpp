//All data types can use 1 fucntion using template function
#include <iostream>
#include <string>
using namespace std;

template<class Q>  //use this fucntion, keyword is template, class is another key word, Q is the all rounder template, by Q
//you can use any word or letter, it doesnt have to be Q.

Q compare(Q number1, Q number2)     //Here replace the data type(Declarations eg int) with Q
{
	if(number1>number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
	
} //It works for all data types accept void, void is not a data type.

int main()
{
	//integers
	int a=10;
	int b=20;
	int c=compare(a,b);  //comaring integers
	cout <<"The highest is: "<<c<<'\n';
	
	
	//doubles
	double w=32.5;
	double x=50.6;
	double y=compare(w,x);  //comaring doubles
	cout <<"The highest is: "<<y<<'\n';
	
	//strings
	string e="Krishen";
	string f="Thoolsi";
	string g=compare(e,f);  //comaring strings
	cout <<"The highest is: "<<g<<'\n';
	
	
	return 0;
}
