//increasing capacity of a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>r;          //class <declaration> varaibleName [size];
	
	r.push_back(96);    //variableName.push_back(contents)   adds contents to the array of 'variableName'
	r.push_back(45);
	r.push_back(85);
	r.push_back(101);
	
	for (int i=0; i<4; i++)
	{
		cout <<r[i]<<'\n';
	}
	
	cout <<"Increase capacity of the vector varable is: "<<r.capacity()<<'\n';   //here the capacity would icrease to double.
	//but this one is not really recommended.
	
	//2 other ways of changing a capacity of a vector are:
	
	r.reserve(9);  //here capacity would increase to 9. Here you cannot reduce capacity
	
	r.resize(6);   //it will resize the capacity to 6. Here you can reduce capacity using this function.
	
	return 0;
}
