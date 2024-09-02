//pointers and what each fucntion is 
#include <iostream>
using namespace std;

int main()
{
	int balance, value;
	int*address;   //declaring the pointer variable to get address, we use a * to declare it
	
	balance=1000;  //giving a normal varaible value
	
	address= &balance;   //We use a n '&' infront of the normal variable to get the address and pass it to the pointer
	//to get the address of that variable.
	
	value = *address;  //to get the value from the address, you get an empty normal variable
	//and pass the address using the '*' in the pointer variable to the normal variable
	
	
	cout <<"The value given to the declared variable: "<<balance<<'\n';
	cout <<"The address of the value: "<<address<<'\n';
	cout <<"The addressed passed(from the pointer) to a normal declared variable to show the value in that address: "<<value<<'\n';
	
	return 0;
}
