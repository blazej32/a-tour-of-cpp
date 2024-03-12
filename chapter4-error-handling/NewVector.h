#ifndef A_TOUR_OF_CPP2_NEWVECTOR_H
#define A_TOUR_OF_CPP2_NEWVECTOR_H


class NewVector {
public:
    NewVector(int s) :elem{new double[s]}, sz{s} { }
    double& operator[](int i);
    int size() { return sz; }
private:
    double* elem;
    int sz;
};


#endif //A_TOUR_OF_CPP2_NEWVECTOR_H
