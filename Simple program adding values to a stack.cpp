#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>myStack;

    //Adding values to a stack
    myStack.push(5);
    myStack.push(9);
    myStack.push(78);
    myStack.push(63);


    cout <<"Values in my stack are: "<<endl;
    while(!myStack.empty())
    {
        cout <<myStack.top()<<endl;   //this returns the elements from the top
        myStack.pop();
    }


    return 0;
}
