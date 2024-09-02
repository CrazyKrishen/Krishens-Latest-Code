#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::greater

int main()
{
    std::vector<int> vec = {5, 2, 8, 1, 4};

    // Sort the vector in descending order using std::greater
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    std::cout<<"Greater function: ";

    for(int i : vec)
    {
        std::cout << i << " ";  // Output: 8 5 4 2 1
    }

    std::cout <<'\n';
    std::cout <<'\n';



    //Sort the vector in ascending order using std::less
    std::sort(vec.begin(), vec.end(), std::less<int>());
    std::cout<<"Less function: ";

    for(int i : vec)
    {
        std::cout << i << " ";  // Output: 8 5 4 2 1
    }

    std::cout <<'\n';
    std::cout <<'\n';

    return 0;
}
