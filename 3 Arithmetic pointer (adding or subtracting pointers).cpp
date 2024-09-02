//Arithmetic pointer (adding or subtracting pointers)
#include <iostream>
using namespace std;

int main()
{
	//Adding or subtracting an integer value to a pointer moves it to a different memory location
	
	int *address_pointer, number; //declaring a pointera and normal varaible
	
	address_pointer = &number;  //the numbers address '&' is equated to the pointer
	
	*address_pointer= 100;   //giving the pointer a value
	
	cout <<"Value of the normal variable is: "<<number<<'\n';
	
	(*address_pointer)++;  //incrementing the pointer by 1	
	cout <<"After the pointer was incremented by 1, the normal variable is: "<<number<<'\n';
	
	(*address_pointer)*=2; //pointer 
	cout <<"After the pointer was mulitplied by 2, the normal variable is: "<<number<<'\n';
	
	(*address_pointer)+=8; //pointer 
	cout <<"After the pointer was addded 8 onto, the normal variable is: "<<number<<'\n';
	
	
	return 0;
}
