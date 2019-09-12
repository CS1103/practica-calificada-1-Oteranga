//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial():point(nullptr),values(){}

void Polynomial::add(double c, int p){
    values.push_back(c);
    values.push_back(p);
}

void Polynomial::copy() {

}

void Polynomial::degree() {
    double max=0;
    for (int i:values){
        if(i>max)
            max=i;
    }

}

void Polynomial::operator+() {
    for(int i=0;i<values.size();i++){
        if (i%2!=0){
            values[i]=
        }
    }
}

void Polynomial::operator*(double c) {
    for (int i=0; i<values.size();i++){
        if(i%2!=0){
            values[i]=values[i]*c;
        }
    }

}

void Polynomial::operator^(int p) {
    for (int i=0;i<values.size();i++){

    }
}

void Polynomial::operator+=(double) {

}
