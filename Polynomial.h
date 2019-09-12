//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
using namespace std;

class Polynomial {
private:
    vector<double> values;
    Polynomial* point;
public:
    Polynomial();
    void add(double, int);
    void copy();
    void degree();
    void operator+();
    void operator+=(double);
    void operator^(int);
    void operator*(double);
};

#endif //POLINOMIO_POLINOMIO_H
