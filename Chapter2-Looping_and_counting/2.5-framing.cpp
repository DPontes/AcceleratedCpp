// Ask for a person"s name and greet that person
#include <iostream>
#include <string>

int main() {
    // ask for the person"s name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // Build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    return 0;
}
