#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    float radius;

public:
    double getRadius(void) const;
    double getArea(void) const;
    double getPerimeter(void) const;
    void setRadius(float);
};

double Circle ::getRadius() const
{
    return radius;
}
double Circle ::getArea() const
{
    return M_PI * pow(radius, 2);
}
double Circle ::getPerimeter() const
{
    return 2 * M_PI * radius;
}
inline void Circle ::setRadius(float value)
{
    radius = value;
}

int main(void)
{
    double rad;
    Circle circle1;
    while (true)
    {
        cout << "Enter the radius of the circle (0 to quit): ";
        cin >> rad;
        if (rad == 0)
            goto exit;
        circle1.setRadius(rad);
        cout << "Radius: " << circle1.getRadius() << endl;
        cout << "Area: " << circle1.getArea() << endl;
        cout << "Perimeter: " << circle1.getPerimeter() << endl;
    }
exit:
    return 0;
}