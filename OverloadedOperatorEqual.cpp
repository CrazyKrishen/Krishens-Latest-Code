//OverloadedOperatorEqual
#include <iostream>
using namespace std;

class Date
{
	private:
		int day,month, year;
		
	public:
		Date(int dayP,int monthP,int yearP);   //note all constructors are used for initializtion only!!
		bool operator==(Date & otherVariableSet);
		
};


Date::Date(int dayP,int monthP,int yearP)
{
	day=dayP;
	month=monthP;
	year=yearP;
}

bool Date:: operator==(Date & otherVariableSet)
{
	return (day == otherVariableSet.day && month == otherVariableSet.month && year == otherVariableSet.year);
}

int main()
{
	Date P(1,6,2016);
	Date Q(1,6,2016);
	
	if(P==Q)
	{
		cout <<"They are the same dates!"<<endl;
	}
	else
	cout <<"They are not the same dates!"<<endl;
	
	
	
	return 0;
}





//After this check out 3 and 4 under lectuers notes in your files
