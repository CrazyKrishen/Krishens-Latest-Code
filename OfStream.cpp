#include <iostream>
#include <fstream>

int main()
{
    // Output to console using std::cout (an instance of ostream)
    std::cout << "Hello, World!" << std::endl;

    // Output to a file using ofstream (derived from ostream)
    std::ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Writing to a file." << std::endl;
        outfile.close();
    }

    return 0;
}
