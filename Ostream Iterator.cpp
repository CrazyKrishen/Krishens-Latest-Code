#include <iostream>
#include <iterator>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers = { 5, 10, 15, 20, 25 };
    cout << "Vector elements: ";
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " ")); //used when you want to output a vector

    //The main purpose of ostream_iterator is to abstract away the details of formatting and output operations,
    //allowing you to focus on the logic of your code without worrying about manual formatting or looping.

    //This means you dont need to put anything into a loop. It displays all the contents in the vector without a while loop or for loop.
}
