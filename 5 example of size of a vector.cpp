//example of size of a vector
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
	
	cout <<"Size of the vector varable is: "<<r.size()<<'\n';      //we use variableName.size() to show size
	
	return 0;
}
