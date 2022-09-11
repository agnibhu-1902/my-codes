#ifndef SMALLEST_H
#define SMALLEST_H
#include <iostream>
#include <limits>
using namespace std;

class Smallest
{
private:
    int current;
public:
    Smallest();
    ~Smallest();
    int operator()(int); // Functor
};

#endif