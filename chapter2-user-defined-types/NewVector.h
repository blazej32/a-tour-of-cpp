#ifndef A_TOUR_OF_CPP2_NEWVECTOR_H
#define A_TOUR_OF_CPP2_NEWVECTOR_H

// best practice: put your class definitions in a header file with the same name as the class trivial member functions
//(such as access functions, constructors with empty bodies, etc...) can be defined inside the class definition

// a tighter connection between the representation and the operations is needed for a user-defined type
// we often want to keep the representation inaccessible to users so as to simplify use, guarantee consistent use of
// the data, and allow us to later improve the representation; the language mechanism for that is called a class.
// a class has a set of members, which can be data, function, or type members
class NewVector {
// conventionally we put the public declarations first and the private declarations later
public:
    NewVector(int s) :elem{new double[s]}, sz{s} { } // a member function with the same name as its class is called a constructor
    double& operator[](int i) { return elem[i]; } // element access: subscripting
    int size() { return sz; }
private:
    double* elem; // pointer to the elements
    int sz; // the number of the elements
};


#endif
