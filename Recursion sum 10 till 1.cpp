//2- Recursion sum adding 10 till 1
//Is used when the fucntions header is used in the fucntion itself
//this basically replaces iteration
#include <iostream>
using namespace std;


int sum(int n)
{
	if(n==0)
	{
		return 0;   //this is called your 'Base Case' becuase the numbers need to be added till this point it stops
	}
	else
	{
		return n+sum(n-1);    //this is called your recursive case
	}
}


int main()
{
	int total=0;
	
	total=sum(10);
	
	cout <<total;
	
	return 0;
}
