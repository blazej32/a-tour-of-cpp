#include <iostream>
#include "NewVector.h"

// the first step in building a new type is often to organize the elements it needs into a data structure:
struct Vector {
    double* elem;  // pointer to elements
    int sz;  // number of elements
};

void vector_init(Vector& v, int s) // Initialize a Vector
{
    v.elem = new double[s];
    v.sz = s;
}

// an example of a simple use of Vector
double read_and_sum(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
    Vector v;
    vector_init(v, s);

    for (int i=0; i!=s; ++i)
        std::cin>>v.elem[i];

    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i];

    return sum;
}

int main()
{
    // c++'s set of built-in types and operations is rich, but deliberately low-level
    // they directly and efficiently reflect the capabilities of hardware

    // types built out of other types using c++'s abstraction mechanisms are called user-defined types
    // they are referred to as classes and enumerations

    // std::cout<<read_and_sum(5);
    NewVector v(6);
    std::cout<<v.size();

    return 0;
}