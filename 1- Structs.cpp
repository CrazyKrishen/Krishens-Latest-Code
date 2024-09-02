//1- Structs
#include <iostream>
#include <string>
using namespace std;

struct StudentInfo   //make sure that the name is starting with a capital
{
	string name;
	int studentNo;
	double mark;
};

void collectInfo(StudentInfo & students)
{
	cout <<"Please enter your name: "<<'\n';
	getline(cin,students.name,'\n');
	
	cout <<"Please enter your student number: "<<'\n';
	cin >>students.studentNo;
	
	cout <<"Please enter your mark: "<<'\n';
	cin >>students.mark;
}



int main()
{
	StudentInfo stu1;  //declare a variable using the structs name
	
	cout <<"Student Information..."<<'\n';
	
	collectInfo(stu1);
	cout <<"Student Name: "<<stu1.name<<'\n';
	cout <<"Student no.: "<<stu1.studentNo<<'\n';
	cout <<"Student Mark: "<<stu1.mark<<'\n';
	
	return 0;
}
