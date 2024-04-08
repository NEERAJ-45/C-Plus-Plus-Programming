#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    istringstream iss("   Hello, World!   ");

    string word;
    iss >> std::ws >> word; // Use ws to ignore leading whitespace
                            // Extract first word after whitespace

    std::cout << "First word after leading whitespace: " << word << std::endl;

    return 0;
}
