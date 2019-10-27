#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cin;     using std::setprecision;
using std::cout;    using std::streamsize;
using std::sort;    using std::string;
using std::endl;    using std::vector;

// Compute a student's overall grade from midterm
// and final exam grades and homework
double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

// Compute the median of a vector<double>
// Note that calling this function copies the entire argument `vector`
double median(vector<double> vec) {
    typedef vector<double>::size_type vector_size;

    vector_size size = vec.size();
    if (size == 0) throw domain_error("Median of an empty vector");
    sort(vect.begin(), vec.end());
    vector_size mid = size / 2;
    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

// Compute a student's overall grade from midterm and final exam grades
// and vector of homework grades
// This function does not copy its argument, because `median` does it for us
double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0) throw domain_error("Student has done no homework");
    return grade (midterm, final, median(hw));
}
