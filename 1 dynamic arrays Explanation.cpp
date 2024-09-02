//dynamic arrays Explanation but check the power point presentation
#include <iostream>
using namespace std;

int main()
{
	//Dynamic array solution:
	//-Prompt for array size during program execution (dynamic size) is important 
	
	//things needed to make a dynamic array:
	//-Pointer Variable
	//-Array
	//-new operator  (allows us to allocate memory for the dynamic array during runtime)
	//-delete operator (does the opposite of the new operator – deallocates memory)
	
	//Dynamic array creation:
	//-Use new operator      IMPORTANT LINE!!

    //Example:
    //p=new int[10];        IMPORTANT LINE!!
    
    //Operator delete: 
    //-Destroys dynamic variables
    //-delete pointerVariable
    //-delete [ ] pointerVariable;
    
    //Memory leak:
    //-Memory space that cannot be reallocated
    
    //Dangling pointers:
    //-Pointer variables containing addresses of deallocated memory spaces
    //-Avoid by setting deleted pointers to NULL after delete
    
    //Accessing array elements with pointers:
    //-Element A[i] can be accessed by *(aPtr+i) 
    //This is called pointer/offset notation
    
    //- This is called pointer/offset notation
    //A[3] is same as  *(A+3)
    
    //Pointers can be subscripted
    //(i.e. pointer/subscript notation)
    //aPtr [3] is the same as A[3]
	
	return 0;
}
