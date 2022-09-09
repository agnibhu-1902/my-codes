#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;
    bool isValid() const;
public:
    Triangle(double, double, double);
    ~Triangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif