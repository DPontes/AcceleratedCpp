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

_A reference parameter without a `const` usually signals an intent to modify the object that is the function's argument.
[...]

Because we expect the function to modify its argument, we cannot call the function with just any expression. Instead, we must pass an **lvalue** argument to a reference parameter. An **lvalue** is a value that denotes a nontemporary object.

[...] the `clear` member_ (in function `read_hw`) _behaves completely different for `istream` objects as it soes for `vector` objects. For `istream` objects, it resets any error indications so that input can continue; for `vector` objects, it discards any contents that the vector might havehad, leaving us with an empty vector again._
