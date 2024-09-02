//ClassWithFriendFucntion
#include <iostream>
using namespace std;

class Values
{
	private:
		int length, breath;
		
	public:
		Values(int len, int brea);   //note all constructors are used for initializtion only!!
		friend void displayArea(Values & input);  //The parameter Values & input is the creation of the object
};

Values::Values(int len, int brea)
{
	length=len;
	breath=brea;
}

void displayArea(Values & inputP)  //The parameter Values & input is the creation of the object
{
	int area;
	
	area=inputP.length*inputP.breath;
	
	cout <<"Area is "<<area;
}

int main()
{
	
	Values input(20,30);  //Create the object here with values
	displayArea(input);
	
	
	return 0;
}
