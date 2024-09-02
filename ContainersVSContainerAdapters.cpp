#include <iostream>
#include <stack>
#include <vector>

int main()
{
    // Using vector (a container)
    std::vector<int> vec = {1, 2, 3};
    vec.push_back(4); // Adding an element to the vector

    std::cout << "Vector: ";
    for (int i : vec)
    {
        std::cout << i << " "; // Accessing elements randomly
    }

    std::cout << "\n";

    // Using stack (a container adapter)
    std::stack<int> stk;
    stk.push(1); // Pushing elements onto the stack
    stk.push(2);
    stk.push(3);
    stk.push(4);


    std::cout << "Stack top: " << stk.top() << "\n"; // Accessing the top element
    stk.pop(); // Removing the top element
    std::cout << "Stack top after pop: " << stk.top() << "\n";
    return 0;
}
