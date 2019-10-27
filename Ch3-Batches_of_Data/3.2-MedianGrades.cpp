#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;     using std::setprecision;
using std::cout;    using std::streamsize;
using std::sort;    using std::string;
using std::endl;    using std::vector;

int main() {
    // Ask for and read the student's name
    cout << "Please enter you first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // Ask and read the midterms and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, finals;
    cin >> midterm >> finals;

    // Ask for and read the homework grades
    cout << "Please enter all your homework grades, followed by EoF" << endl;
    cout << "(Win: Ctrl-Z / Unix: Ctrl-D): " << endl;

    vector<double> homework;
    double grade;
    // Invariant `homework` contains all the homework grades read so far
    while (cin >> grade) { homework.push_back(grade); }

    // Check that the student entered some homework grades
    typedef vector<double>::size_type vector_size;
    vector_size size = homework.size();
    if (size == 0) {
        cout << endl << "You must enter your grades. Please try again: ";
    return 1;
    }

    // Sort the grades
    sort(homework.begin(), homework.end());

    // Compute the median homework grade
    vector_size mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
                           : homework[mid];

    // Compute and write the final grade
    streamsize prec = cout.precision();
    cout << "Your final grade is: " << setprecision(3)
         << 0.2 * midterm + 0.4 * finals + 0.4 * median
         << setprecision(prec) << endl;

    return 0;
}
