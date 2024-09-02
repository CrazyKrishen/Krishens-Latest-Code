#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> values)
{
    while(!values.empty())
    {

        cout <<values.front()<<" ";
        values.pop();
    }

    cout <<endl;
}


int main()
{
    queue<int> myQueue;

    myQueue.push(36);
    myQueue.push(58);
    myQueue.push(98);

    cout <<"Size of myQueue: "<<myQueue.size()<<'\n';
    cout <<"Front of myQueue: "<<myQueue.front()<<'\n';
    cout <<"Last element of myQueue: "<<myQueue.back()<<'\n';

    cout <<"My queue:"<<'\n';
    printQueue(myQueue);


    return 0;
}
