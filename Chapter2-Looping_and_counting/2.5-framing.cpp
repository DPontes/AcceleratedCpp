// Ask for a person"s name and greet that person
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::string;
using std::endl;

int main() {
    // ask for the person"s name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // Build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // The number of blanks surrounding the greeting
    const int pad = 1;

    // The number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + 2 + 2;

    // Write a blank line to separate the input from the output
    cout << endl;

    // Write `rows` rows of output
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        // We have written `c` characters so far in the current column
        while (c != cols) {
            // Is it time to write the greeting?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                // Are we on the border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }

        cout << endl;
    }

    return 0;
}
