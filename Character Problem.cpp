//Character Problem
#include <iostream>
using namespace std;

int main()
{
	char a,b,c;
	
	cout << "Enter a line of input and I will echo it:\n"; 
	cin.get(a);
	cin.get(b);
	cin.get(c);
	
	
	cout <<a;         
	cout <<b;
	cout <<c;   
	
	//The problem reading in the characters here is that it will read only the first two characters and after that it doesnt read the full line 
	//but skips and displays nothing after the two characters. Theres a solution next. Problem is on page 373. Try typing in AB CD.
	
	
	return 0;
}
