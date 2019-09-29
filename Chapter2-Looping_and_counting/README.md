# Notes on the chapter

From the book:

_In this chapter, we're going to make the program more flexible so that we can change the size of the frame without rewriting the program._

## 2.4 - Writing a row
From the book:

_The reason we have given `cols` a type of `std::string::size\_type` is to ensure that `cols` is capable of containing the number of characters in `greeting`, no matter how large the number might be. [...] we have no control over how long the input might be._
_[...] it is a good habit to use the type that the library defines as being appropriate for that specific purpose._

### 2.4.1.2 - Logical operators
From the book:

_If a program finds that the left operand of `||` is true, it does not evaluate the right operand at all. This property is often called *short-circuit evaluation*_
