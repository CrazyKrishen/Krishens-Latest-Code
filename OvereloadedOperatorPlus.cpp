//OvereloadedOperatorPlus
#include <iostream>
using namespace std;


class Add
{
	private:
		int x, y;
		
	public:
		Add();  //note all constructors are used for initializtion only!!
		Add(int a, int b);  //note all constructors are used for initializtion only!!
		Add operator+(Add & otherValueSetQ);  //Here otherValueP is the other value from another value set stored in this parameter
		void display();
};

Add::Add()
{
	x=0;
	y=0;
	
}

Add::Add(int a, int b)  //this constructor is the one with parameters in its public class above 
{
	x=a;
	y=b;
}

Add Add::operator+(Add & otherValueSetQ) //note we used Add Add twice in the beginning
{
	Add firstValueSetP;   //an object created for the first set of values
	
	firstValueSetP.x = x +  otherValueSetQ.x;
	firstValueSetP.y = y + otherValueSetQ.y;
	
	return firstValueSetP;
}


void Add::display()   
{
	
	cout <<"Remeber values here are like: P(x1;y1)  Q(x2;y2) "<<endl;
	cout <<"The values I used were: P(10;20)    Q(60;100)"<<endl<<endl;
	
	
	cout <<"x1 added with x2 ="<<x<<endl;
	cout <<"y1 added with y2 ="<<y<<endl;
}


int main()
{
	Add P(10,20);    //P is a new object created
	Add Q(60,100);  //Q is a new object created
	
	Add total = P.operator+(Q);   //total is a new object created, firstParameter.operator+(Add & otherValueSetP)
	
	total.display();
	
	return 0;
}
