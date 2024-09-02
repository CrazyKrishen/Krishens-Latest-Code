//ClassWithNoFriendFunc
#include <iostream>
using namespace std;

class Values
{
	private:
		int length, breath;
		
	public:
		Values(int len,int brea);   //note all constructors are used for initializtion only!!
		int lenFunc() const;    //Here even if you take out const, youll still get the same result
		int breaFunc() const;   //Here even if you take out const, youll still get the same result
	
};
 
Values::Values(int len, int brea)   //constructor
{
	length=len;
	breath=brea;
}

int Values::lenFunc() const
{
	return length;
}

int Values::breaFunc() const
{
	
	return breath;
}



int main()
{
	
	Values input(16,20); // Here now you need to take values from your constructor and place them in the object.
	
	int area;
	
	
	area= input.breaFunc()*input.lenFunc();
	
	cout <<"Area here is: "<<area<<endl;
	
	
	return 0;
}
