//2 using the dynamic array
#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cout <<"Please enter the size of the array: "<<'\n';
	cin >>size;
	
	int *myArray_ptr = new int[size];      //The dynamic array here is 'new int[size]' is equated to the pointer
	
	cout <<"Enter different numbers in the array: "<<'\n';
	for(int i=0; i<size; i++)
	{
		cout <<"myArray_ptr["<<i<<"] :";
		cin >>myArray_ptr[i];
	}
	cout <<'\n'<<'\n';
	
	cout <<"THIS IS THE DIFFERENCING OF THE ELEMENTS OF THE ARRAY! "<<'\n';
	cout <<'\n';
	
	cout <<"One way to display the contents in the array is: "<<'\n';
	for(int i=0; i<size; i++)
	{
		cout <<"myArray_ptr["<<i<<"] contains:"<<myArray_ptr[i]<<'\n';
		
	}
	cout <<'\n'<<'\n';
	
	
	cout <<"Another way to display the contents in the array is: "<<'\n';
	for(int i=0; i<size; i++)
	{	
		cout <<"*(myArray_ptr +"<<i<<") contains: "<<*(myArray_ptr + i)<<'\n';
		
	}
	cout <<'\n'<<'\n';
	
	
	cout<<"The addresses of each value are the following: "<<'\n';
	for(int i=0; i<size; i++)
	{	
		cout <<"&myArray_ptr["<<i<<"] contains: "<<&myArray_ptr[i]<<'\n';
		
	}
	cout <<'\n'<<'\n';
	
	
	cout<<"Another way to display addresses is: "<<'\n';
	for(int i=0; i<size; i++)
	{	
		cout <<"myArray_ptr+"<<i<<" contains: "<<myArray_ptr+i<<'\n';
		
	}
	
	cout <<'\n'<<'\n';
	
	cout <<"For display contents, the two elements that are equal: "<<'\n';
	cout <<"myArray_ptr[i] = *(myArray_ptr +i)"<<'\n';
	
	cout <<'\n'<<'\n';
	
	cout <<"For displaying addresses, the two elements that are equal: "<<'\n';
	cout <<"&myArray_ptr[i] = myArray_ptr +i"<<'\n';
	cout <<'\n';
	cout <<"CHECK IS OUT IN THE POWER POINT, ITS THERE SHOWING THE EQUIVALANCE!!";
	//these are just showing you the equivalance from each of these. Its explained more in the power point using diagrams
	
	delete[] myArray_ptr; //delete deallocate the memory when we no longer need it
	
	return 0;
}
