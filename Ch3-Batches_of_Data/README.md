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

(From the book) _When we include the word `typedef` as part of a definition, we are saying that we want the name that we define to be a synonym for the given type, rather than a variable of that type. [...] Nmes defined via `typedef` have the same scope as any other names._
