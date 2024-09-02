//facotrial 
#include <iostream>
using namespace std;


int factorial(int n)
{
	if(n==0)
	{
		return 1;  //base case
	}
	else
	{
		return n*factorial(n-1);  //recursive case
	}
}

int main()
{
	int total=0;
	
	total=factorial(10);
	
	cout <<total;
	
	return 0;
}
