//cstrong getline reached max characters
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[5];
	
	cout <<"Please enter 5 characters: "<<'\n';
	cin.getline(a,5);
	
	cout <<a;
	
	//Here it will display the 4 characters, 
	//the 5th one is give to '\0'
	
	return 0;
}
