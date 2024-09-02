//copy, concatenation and length using cstring
#include <iostream>
#include <cstring>
using namespace std; 


int main()
{
	char word1[10]="Hello";
	char word2[10]="World";
	char word3[10];
	int length;
	
	strcpy(word3, word1);  //fucntion of copying int cstring
	cout <<"Copied string using strcpy() function: "<<word3<<'\n';  //Display copied string
	
	strcat(word1,word2);   //word 2 is concatenated into word 1
	cout <<"The concatenated string using strcat() funtion is: "<<word1<<'\n';   //Displays the coconcatenated word
	
	
	length= strlen(word1);
	cout <<"The function strlen() the length of word1 that is concatenated alredy is: "<<length<<'\n';
	
	return 0;
}
