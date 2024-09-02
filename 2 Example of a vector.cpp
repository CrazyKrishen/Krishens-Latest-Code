//Example of a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	vector<int>numbers;  //declaring the vector variable
	
	
	
	cout <<"Please enter a list of positive numbers and end with a negative number: "<<'\n';
	
	int collection; //declaring the integer variable
	cin >>collection;
	
	while(collection>0)
	{
		
		numbers.push_back(collection);   // The member function push_back adds an element in the next available position.
		
		cout <<"Added togther using numbers.size() is "<<numbers.size()<<'\n';
		cin >>collection;
	}
	
	cout <<"You entered: "<<'\n';  //showing the list entered
	for(int i=0; i<numbers.size();i++)
	cout <<numbers[i]<<'\n';
	
	
	return 0;
}
