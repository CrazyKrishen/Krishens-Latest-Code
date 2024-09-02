//1 showing what a pointer is
#include <iostream>
using namespace std;

int main()
{
	int number;
	int *address_pointer;
	
	number =20;
	
	address_pointer = &number;  ///We use an '&' infront of the normal variable to get the address and pass it to the pointer
	//to get the address of that variable.
	
	cout <<"Value in the normal variable is: "<<number<<'\n';
	
	cout <<"The address of the pointer is: "<<address_pointer<<'\n';
	
	
	cout <<"The value in the pointer is: "<<*address_pointer<<'\n';  //to show value in pointer, you need to 
	//add a '*' next to decalred pointer
	
	
	return 0;
}
