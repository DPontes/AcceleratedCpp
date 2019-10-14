# Notes on the chapter

## 3.1 - Computing students grades

We reset the precision of `cout` back to what it was before it was changed:
```cpp
streamsize prec = cout.precision();
[...]
    << setprecision(prec) << endl;
```
