//example of a function object
#include <iostream>
#include <vector>
#include <algorithm>

// Define a function object (functor) that increments a number by a given amount
class Increment {
public:
    Increment(int n) : num(n) {}

    // Overload the function call operator
    int operator()(int x) const {
        return x + num;
    }

private:
    int num;
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Create an Increment object with an increment value of 10
    Increment increment_by_10(10);

    // Use std::transform with the function object to increment each element in the vector
    std::transform(vec.begin(), vec.end(), vec.begin(), increment_by_10);

    // Output the transformed vector
    for(int i : vec) {
        std::cout << i << " ";  // Output: 11 12 13 14 15
    }

    return 0;
}
