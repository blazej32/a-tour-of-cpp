#include "NewVector.h"

double &NewVector::operator[](int i)
{
    if (!(0<=i && i<size()))
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
    //skip na razie

}