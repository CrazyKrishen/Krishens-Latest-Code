#include <iostream>

class Queue {
private:
    int front, rear, capacity;
    int* array;

public:
    Queue(int size) {
        capacity = size;
        front = rear = -1;
        array = new int[size];
    }

    ~Queue() {
        delete[] array;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int item) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        if (isEmpty())
            front = 0;
        rear = (rear + 1) % capacity;
        array[rear] = item;
        std::cout << item << " enqueued to queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        int item = array[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
        std::cout << item << " dequeued from queue.\n";
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        std::cout << "Elements in the queue are: ";
        int i = front;
        while (i != rear) {
            std::cout << array[i] << " ";
            i = (i + 1) % capacity;
        }
        std::cout << array[rear] << std::endl;
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    queue.display();

    queue.enqueue(6); // Queue is full

    queue.dequeue();
    queue.dequeue();

    queue.display();

    return 0;
}
