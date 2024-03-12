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

    // struct is simply a class with members public by default

    //enums
    // c++ supports a simple form of user-defined type for which we can enumerate the values
    enum class Color { red, blue, green };
    Color col = Color::red;
    // enumerations are used to represent small sets of integer values; they make the code more readable and less error-prone


    // unions: a union is a struct in which all members are allocated at the same address so that the union occupies
    // only as much space as its largest number

    // this kind of space optimization can be important for applications that hold large amounts of memory so that
    // compact representation is critical

    // variant: it stores a value of  one of a set of alternative types; for many uses, a variant is simpler and safer than union



    return 0;
}