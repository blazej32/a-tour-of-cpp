#include <iostream>
#include <vector>
#include "2-user-defined-types.h"

int main()
{
    int aaa = 0x00FA;
    double ddd {2.2};
    auto sum = aaa + ddd;
    sum++;

    char v[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char* p = &v[3];  // prefix unary & means 'address of'
    char x = *p;  // prefix unary * means 'contents of'
    std::cout<<x<<std::endl;

    std::cout<<std::endl;

    for (auto i=0; i!=10; ++i);
    for (auto m : v)  //  "for every element of v, place a copy in m and print it
        std::cout<<m<<std::endl;
    for (auto& m : v) // we don't want to copy the values, but rather just have m refer to an element
        m++;
    // in declaration & means 'reference to', it cannot refer to different object after initialization

    double function(const std::vector<double>&); // const and &: we don't want to modify or copy an argument
    // in declarations: &, * and [] are called declarator operators

    double* pd = nullptr; // the null pointer

    if (auto w = v[1]; w != 'b')
        345;

    switch (aaa){
        case 345:
            3456;
            break;
        default:
            123;
    }

    std::cout<<std::endl;

    int c = 2;
    int d = 3;
    c = d;
    d = 4;
    std::cout<<c<<std::endl;
    // the two objects are independent, we can change the value od d without affecting the value of c

    int e = 2;
    int f = 3;
    int* g = &e;
    int* h = &f;
    g = h;
    // different objects refer to the same (shared) value, p=q gives p==q

    int i = 2;
    int j = 3;
    int& i2 = i;
    int& j2 = j;
    i2 = j2;
    // read through j2, write through i2: i becomes 3


    return 0;
};
