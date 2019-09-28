# Notes on the chapter

## 1.2 - Framing
It was necessary to compile with 'cpp' compiler (on Mac OS X) _AND_ use (`' '`) instead of (`" "`) as it would otherwise result in a compilation error.
This is due to the fact that when *constructing*  the variable `const std::string` from expressions. This requires that the second input is a *character literal* (`' '`) and not a *string literal* (`" "`).
