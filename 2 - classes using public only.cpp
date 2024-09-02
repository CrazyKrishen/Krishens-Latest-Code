//2 - classes using public only 
#include <iostream>
#include <string>
using namespace std;

class StudentInfo
{
	public:
		string name;
		int studentNo;
		double mark;
	
};

int main()
{
	StudentInfo student1;
	
	cout <<"Please enter name: "<<'\n';
	getline(cin,student1.name,'\n');
	cout <<"Please enter student number: "<<'\n';
	cin >>student1.studentNo;
	cout <<"Please enter mark: "<<'\n';
	cin >>student1.mark;
	
	cout <<'\n';
	cout <<student1.name<<'\n';
	cout <<student1.studentNo<<'\n';
	cout <<student1.mark<<'\n';
	
	
	return 0;
}
