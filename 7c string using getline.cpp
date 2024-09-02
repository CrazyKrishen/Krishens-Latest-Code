//c string using getline
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[80];
	
	cout <<"Please enter a full sentence: ";
	cin.getline(a,80);
	
	cout <<a;
	
	
	
	return 0;
}
