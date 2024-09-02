#include <iostream>

// Define a structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Define the linked stack class
class LinkedStack {
private:
    Node* topNode; // Pointer to the top node of the stack

public:
    // Constructor
    LinkedStack() {
        topNode = nullptr;
    }

    // Destructor
    ~LinkedStack() {
        // Free memory for all nodes in the stack
        while (!isEmpty()) {
            pop();
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node; // Create a new node
        newNode->data = value;    // Set the data
        newNode->next = topNode;  // Set the next pointer to the current top node
        topNode = newNode;        // Update top node to point to the new node
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        Node* temp = topNode;       // Store the current top node
        topNode = topNode->next;    // Move top pointer to the next node
        delete temp;                // Delete the old top node
    }

    // Function to get the top element of the stack
    int top() {
        if (isEmpty()) {
            std::cout << "Stack is empty. There is no top element." << std::endl;
            return -1;
        }
        return topNode->data;
    }
};

// Main function
int main() {
    LinkedStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element of the stack: " << stack.top() << std::endl;

    stack.pop();

    std::cout << "Top element of the stack after pop: " << stack.top() << std::endl;

    return 0;
}
