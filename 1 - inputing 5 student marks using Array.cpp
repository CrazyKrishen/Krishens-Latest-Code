//1 - inputing 5 student marks using Array
#include <iostream>
using namespace std;

const int num=5;

class Student
{
	int semester;
	int marks[num];
	
	public:
		void getData();
		int tot_marks();
};

void Student::getData()
{
	cout <<"Please enter your semester: "<<endl;
	cin >>semester;
	
	cout <<"Please enter 5 marks: "<<endl;
	for(int i=0; i<num; i++)
	{
		cin >>marks[i];
	}
}

int Student::tot_marks()
{
	int total=0;
	
	for(int i=0; i<num; i++)
	{
		total+=marks[i];
	}
	
	
	return total;
}

int main()
{
	Student studentMarks;
	double totalMarks;
	
	studentMarks.getData();
	totalMarks=studentMarks.tot_marks();
	
	
	cout <<"The total mark is: "<<totalMarks<<endl;
	
	
	return 0;
}
