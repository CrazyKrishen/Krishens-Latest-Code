#include <iostream>
using namespace std;

struct Node
{
    int values;
    Node* next;
};

class singleList
{
private:
    Node *head, *tail;

public:

    singleList()  //initialization
    {
        head =NULL;
        tail = NULL;
    }

    void createNode(int nodeValues)  //creating the notde an dadding values in it
    {
        Node* temp = new Node;
        temp -> values = nodeValues;
        temp -> next = NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else
        {
            tail ->next = temp;
            tail = temp;
        }

    }

    void displayList()  //displaying values
    {
        Node *temp= new Node;
        temp=head;

        while(temp!=NULL)
        {
            cout <<temp -> values<<"\t";
            temp= temp->next;
        }

    }



    void insert_position(int position,int nodeValue)
    {
        Node *previous = new Node;
        Node *current = new Node;
        Node *temp = new Node;

        current=head;

        for(int i=1; i<position; i++)
        {
            previous = current;
            current = current -> next;
        }

        temp ->values = nodeValue;
        previous -> next = temp;
        temp ->next = current;

    }
};


int main()
{
    singleList list;  //these are the values you are going to add into the variable called list

    //Add elements
    list.createNode(46);
    list.createNode(84);
    list.createNode(96);
    list.createNode(47);
    list.createNode(25);

    list.displayList();  //values displayed
    cout <<'\n';

    //putting values in the current list
    list.insert_position(3, 66);  //now we inserting the values in the currenbt list
    cout <<"We inserted 66 in position 3: "<<'\n';
    list.displayList ();

    return 0;
}
