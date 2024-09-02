#include <iostream>
#include <iterator>
#include <vector>
using namespace std;



int main()
{
    vector<int> numbers = { 5, 10, 15, 20, 25 };
    cout << "Vector elements: ";
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));
}
