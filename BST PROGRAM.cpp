#include <iostream>
#define SPACE 10
using namespace std;

//first create the TreeNode
class TreeNode
{
public:
    int data;  //this is the key or value
    TreeNode *left;
    TreeNode *right;

    TreeNode()  //default constructor
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int v) //paramterized consturctor
    {
        data = v;
        left = NULL;
        right = NULL;
    }

};


//now we create the BST class
class BST
{
public:
    TreeNode *root;


    BST()
    {
        root = NULL;
    }

    bool isTreeEmpty()
    {
        if(root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void insertNode(TreeNode *new_node)
    {
        if(root==NULL)
        {
            root = new_node;   //root is a pointer of tree node and new_node is a pointer of tree node, which is why we can
            //directly equate them

            cout <<"Value Inserted as root node!"<<endl;
        }
        else
        {
            TreeNode *temp = root;    //temp pointer created and given the value of root

            while(temp != NULL)
            {
                if(new_node->data == temp->data) //left
                {
                    cout <<"Value already exists, enter another value!"<<endl;
                    return;
                }
                else if((new_node->data < temp->data) && (temp->left == NULL)) //left
                {
                    temp->left = new_node;
                    cout <<"Value inserted to the left!"<<endl;
                    break;
                }
                else if(new_node->data < temp->data)  //left
                {
                    temp = temp->left;
                }
                else if((new_node->data > temp->data) && (temp->right == NULL))  //right
                {
                    temp->right = new_node;
                    cout <<"Value inserted to the right!"<<endl;
                    break;
                }
                else //right
                {
                    temp = temp->right;
                }

            }
        }

    }






   void print2D(TreeNode *r, int space)
   {
       if(r == NULL)  //BASE CASE
        return;

       space += SPACE; //INCREASE DISTANCE BETWEEN LEVELS

       print2D(r ->right, space);  //PROCESS RIGHT CHILD FIRST
       cout <<endl;

       for(int i = SPACE; i< space; i++)   //Print current node after space count
        cout <<" ";

       cout <<r ->data<<"\n";

       print2D(r->left,space); //Process left child

   }

};




int main()
{
    BST obj;
    int option, val;


    do
    {
       cout <<"Select an optiion. Enter 0 to exit: "<<endl;
       cout <<"1. Insert Node "<<endl;
       cout <<"2. Search Node "<<endl;
       cout <<"3. Delete Node "<<endl;
       cout <<"4. Print BST values "<<endl;
       cout <<"5. Clear Screen "<<endl;
       cout <<"0. Exit Program "<<endl;

       cin >>option;

       TreeNode *new_node = new TreeNode();  //this new_code is created and pointing to the data in the class (heap memory)

       switch(option)
       {
       case 0:
        break;

       case 1:
        cout <<"INSERT"<<endl;
        cout <<"Enter the VALUE of TREE NODE to INSERT in BST: ";
        cin >>val;

        new_node->data = val;
        obj.insertNode(new_node);
        cout <<endl;

        break;

       case 2:
        cout <<"SEARCH"<<endl;
        break;

        case 3:
        cout <<"DELETE"<<endl;
        break;

        case 4:
        cout <<"PRINT AND TRAVERSE"<<endl;
        obj.print2D(obj.root,5);
        break;

        case 5:
        cout <<"CLEAR SCREEN"<<endl;
        system("cls");
        break;

        default:
            cout <<"Enter Proper Option number"<<endl;


       }
    }
    while(option != 0);



    return 0;
}
