#include <iostream>
using namespace std;

class Node
{
public:
    int values;
    Node* next;
};

void display(Node* data)
{
    while(data!=NULL)
    {
        cout <<data ->values<<'\n';
        data = data->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head -> values = 65;
    head -> next = second;

    second -> values = 85;
    second -> next = third;

    third -> values = 74;
    third -> next = NULL;

    display(head);


    return 0;
}
