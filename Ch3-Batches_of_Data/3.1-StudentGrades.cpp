#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::setprecision;
using std::string;
using std::streamsize;

int main() {
    // ask for and read the stundet's name
    cout << "Please enter your first name: " << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // Ask for and read the midterm and final grades
    cout << "Please enter you midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // Ask for home work grades
    cout << "Please enter all your homework grades followed by EoF";
    cout << " (Win: Ctrl+Z / Unix: Ctrl+D): ";

    // The number and sum of grades read so far
    int count = 0;
    double sum = 0;

    // A variable in which to read
    double x = 0;

    // invariant:
    //  we have read `count` grades so far,
    //  and `sum` is the sum of all the counted grades
    while (cin >> x) {
        ++count;
        sum += x;
    }

    // Write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is: "
         << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         << setprecision(prec) << endl;

    return 0;
}
