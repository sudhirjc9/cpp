# Operator Overloading
- When an operator is overloaded with multiple jobs, it is known as operator overloading.
- It is a way to implement compile time polymorphism.

## Any symbol can be used as a function name if
    1. it is a valid operator in C/CPP language
    2. it is preceded by operator keyword

**You cannot overload `sizeof` and `?::` operator**

## Overloading Unary Operator
    - has only the caller object and no argument is passed

## Overloading pre and post increment
    - since the signature is same of pre and post increment to differentiate between them, for post increment a dummy `int` is passed as an argument when overloading.
    - see the code for reference.
    - similar way is done to overload pre and post decrement
