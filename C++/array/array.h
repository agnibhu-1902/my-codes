#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

class Array
{
private:
    double* ptr;
    int size;
public:
    Array(int size); // Constructor
    ~Array(); // Destructor
    double& operator[](int) const; // Accessor
    double& operator[](int); // Mutator
};

#endif