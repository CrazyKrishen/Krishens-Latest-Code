//input of a c string 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[5], b[5];
	
	cout <<"Please enter a 5 word character: "<<'\n';
	cin >>a>>b;
	
	cout <<a<<'\n';
	cout <<b<<'\n';
	
	//with c string after the user presses space, the first word goes to the first variable 
	//and the second goes to the second variable.
	
	//but you can use getline to capture the whole setence like:
	//char a[80];
	//cout << "Enter some input:\n"; 
	//cin.getline(a, 80);
	//cout << a << "END OF OUTPUT\n"
	
	return 0;
}
