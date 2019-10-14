# Notes on the chapter

From the book:
_In this chapter, we'll lokk at more ways of dealing with batches of data, by writing a program that reads a student's exam and homework grades and computes a final grade._

## 3.1 - Computing students grades

We reset the precision of `cout` back to what it was before it was changed:

```cpp
streamsize prec = cout.precision();
[...]
    << setprecision(prec) << endl;
```
