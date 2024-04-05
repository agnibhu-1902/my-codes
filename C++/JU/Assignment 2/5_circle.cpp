#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES
using namespace std;

class Circle
{
    float radius, area;
    public:
        Circle(float);
        class NestedCircle
        {
            Circle &outer;
            public:
                NestedCircle(Circle &);
                void printarea() const;
        };
};

Circle::Circle(float rad)
    : radius(rad)
{
    area = M_PI * pow(radius, 2);
}

void Circle::NestedCircle::printarea() const
{
    cout << "Area of the circle: " << fixed << setprecision(2) << outer.area << endl;
}

Circle::NestedCircle::NestedCircle(Circle &out)
    : outer(out)
{
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circleobj(radius);
    Circle::NestedCircle nestedcircleobj(circleobj);
    nestedcircleobj.printarea();
    return 0;
}