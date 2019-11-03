# Notes on the chapter

We will look at two fundamental ways of organizing large programs offered by C++: functions and data structures. We will also look at the ability to divide our programs into files athat we can compile separately and combine after compilation.

## 4.1 Organizing computations

### 4.1.1 Finding Medians

(From the book) _When a program throws an exception, execution stops in the part of the program in which the `throw` appears, and passes to another part of the program, along with an *exception object*, which contains information that the caller can use to act on the exception.
[...] In this particular example, the exception that we throw is_ `domain_error`_, which is a type that the standard library defines in header `<stdexcept>` for use in reporting that a function's argument is outside the set of values that a function can accept._

### 4.1.2 Reimplementing our grading policy

(From the book) _If we define a non `const` reference - a reference that allows writing - we cannot make ir refer to a `const` object or reference, because doing so would require permission that the `const` denies._
_When we say that a parameter has type `const vector<double>&` we are asking the implementation to give us direct access to the associated argument, without copying it, and also promising that we won't change the parameter's value (which would otherwise change the argument too). Because the parameter is a reference to `const`, we can call this function on behalf of both `const` and non`const vectors`. Because the argument is a reference, we avoid the overhead of copying the argument_

### 4.1.3 Reading homework grades

(From the book) _There is no direct way to return more than one value from a function. One indirect way to do so is to give the function a parameter that is a reference to an object in which it is to place one of its results. [...] our function will look like this:_

```cpp
// Read homework grades from an input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw) {
    // do stuff...
    return in;
}
```

_A reference parameter without a `const` usually signals an intent to modify the object that is the function's argument._
_[...]_

_Because we expect the function to modify its argument, we cannot call the function with just any expression. Instead, we must pass an **lvalue** argument to a reference parameter. An **lvalue** is a value that denotes a nontemporary object._

_[...] the `clear` member_ (in function `read_hw`) _behaves completely different for `istream` objects as it does for `vector` objects. For `istream` objects, it resets any error indications so that input can continue; for `vector` objects, it discards any contents that the vector might havehad, leaving us with an empty vector again._

### 4.1.4 Three kinds of function parameters

Functions `median`, `grade` and `read_hw` each treate their corresponding homework vector in a fundamentally different way.

Funcion `median` has a parameter of type `vector<double>`. This means that the homework vector is **passed by value** into the function, in effect being copied into the function. The reason behind this is that we will want to change the vector when we use `sort` **but** we do not want the original vector to be changed.

Function `grade` has a parameter of type `const vector<double>&`. The `&` asks the immplementation not to copy the argument, and the `const` promisses that the parameter will not be changed. This setup makes the program more efficient, as there is no necessity to copy the vector into the scope. This should be used when the input is of type `vector` or `string` and we do not want to change its content.

Finally, the `read_hw` function has a parameter of type `vector <double>&`. With this implementation, the parameter will be bound directly to the argument (will not be copied into the scope). However, in this case the reason to avoid the copy is because we **want** to edit the argument's value.

## 4.2 Organizing Data

(From the book) _We'll assume that we are given a file that contains many student's names and grades. Each name is followed by a midterm grade and final grade, and then by one or more homework assignment grades._

_[...]Our program should calculate each student's overall grade using medians._

_[...]In the output, we will want the report to be organized alphabetically by student, and we want the final grades to line up vertically so that they are easier to read. These requirements imply that we'll need a place to store the records for all students, so that we can alphabetize them. We''l also need to find the length of the longest name, so that we know how many spaces to put between each name and the corresponding grade._

_[...]Assuming that we have a place to store the data about a single student, we can use a `vector` to hold the student's data. Once the `vector` contains data for all the students, we can `sort` it and then calculate and write each student's grades._
