#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::plus

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    // Use std::transform with std::plus to add 10 to each element
    std::transform(vec.begin(), vec.end(), result.begin(), std::bind(std::plus<int>(), std::placeholders::_1, 10));

    for(int i : result) {
        std::cout << i << " ";  // Output: 11 12 13 14 15
    }

    return 0;

}


/*
std::transform: This is a standard C++ algorithm that applies a specified operation (in this case, addition) to each
element of a range (in vec) and stores the result in another range (in result).


vec.begin(), vec.end(): These iterators define the range [vec.begin(), vec.end()), which includes all elements of the vector vec.



result.begin(): This iterator points to the beginning of the destination range where the transformed values will be stored.
In this case, it starts at the beginning of the vector result.



std::bind(std::plus<int>(), std::placeholders::_1, 10):

- std::bind: This function is used to create a function object (or functor) by binding arguments to a function template.
- std::plus<int>(): This is a standard binary function object that performs addition.
- std::placeholders::_1: This placeholder represents the first argument to the function object that will be passed by std::transform,
which corresponds to each element in vec.
- 10: This is the second argument (right operand) to the addition operation.


*/
