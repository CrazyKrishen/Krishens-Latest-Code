#include <iostream>

using namespace std;

// Define the structure for each node in the queue
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue

public:
    // Constructor
    Queue() {
        front = rear = nullptr;
    }

    // Destructor to deallocate memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to enqueue an element into the queue
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued to the queue." << endl;
    }

    // Function to dequeue an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << temp->data << " dequeued from the queue." << endl;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1;
        }
        return front->data;
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Elements of the queue are: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;

    // Enqueue elements into the queue
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    // Display the queue
    queue.display();

    // Dequeue an element
    queue.dequeue();

    // Display the queue after dequeue
    queue.display();

    // Peek the front element
    cout << "Front element of the queue: " << queue.peek() << endl;

    return 0;
}
