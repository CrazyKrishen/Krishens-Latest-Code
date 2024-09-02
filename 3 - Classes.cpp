//2 - Classes
#include <iostream>
#include <string>
using namespace std;

class StudentInfo
{
	private:
		string studentName;
		int studentNo;
		double mark;
		
		
	public:
		StudentInfo(); //constructor
		void displayInfo();		 
	
};

StudentInfo::StudentInfo()  //this is the constructor and the constructor knows it belongs to StudentInfo using ::
{                           // :: servers the same purpose as '.' accept '.' is used for ojects and :: is used for class names.
	cout <<"Please enter your name: "<<'\n';
	getline(cin,studentName,'\n');
	cout <<"Please enter student number: "<<'\n';
	cin >>studentNo;
	cout <<"Please enter mark: "<<'\n';
	cin >>mark;
	
	
}

	
void StudentInfo::displayInfo() //make sure StudentInfo:: is in all the functions when you write them down 
{
	cout <<studentName<<'\n';
	cout <<studentNo<<'\n';
	cout <<mark<<'\n';
	
}

int main()
{
	StudentInfo studentData; //these are the object declared from the class name.
	
	cout <<'\n';
	studentData.displayInfo();
	
	return 0;
}
