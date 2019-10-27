# Notes on the chapter

From the book:
_In this chapter, we'll look at more ways of dealing with batches of data, by writing a program that reads a student's exam and homework grades and computes a final grade._

## 3.1 - Computing students grades

We reset the precision of `cout` back to what it was before it was changed:

```cpp
streamsize prec = cout.precision();
[...]
    << setprecision(prec) << endl;
```

### 3.2.2 - Generating the output

(From the book) _When we include the word `typedef` as part of a definition, we are saying that we want the name that we define to be a synonym for the given type, rather than a variable of that type. [...] Names defined via `typedef` have the same scope as any other names._

### 3.2.3 - Some additional observtions

(From the book) _[...] `vectors` do not check whether the index is in range. Such checking is up to the user._

`vector<double>::size_type`_, like all standard-library size types, is an *unsigned integral type*. Such types are capable of storing negative values at all; instead, they store values modulo 2^n, where `n` depends on the implementation._

_[...] whenever ordinary integers and unsigned integers combine in an expression, the ordinary integer is converted to unsigned. [...] which means that [the results] cannot be less than zero._

_Every standard-conforming C++ implementation must:

- Implement `vector` so that appending a large number of elements to a `vector` is no worse than proportional to the number of elements
- Implement `sort`to be no slower on average than `n*log(n)`, where `n` is the number of elements being sorted._
