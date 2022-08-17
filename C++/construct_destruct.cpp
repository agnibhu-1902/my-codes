#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    float radius;

public:
    Circle(float);
    ~Circle();
    double getRadius(void) const;
    double getArea(void) const;
    double getPerimeter(void) const;
};

Circle ::Circle(float rad)
    : radius(rad)
{
    cout << "Object created and initialised." << endl;
}
Circle ::~Circle()
{
    cout << "Object destroyed." << endl;
}
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

int main(void)
{
    double rad;
    do
    {
        cout << "Enter the radius of the circle (0 to quit): ";
        cin >> rad;
        if (rad != 0)
        {
            Circle circle(rad);
            cout << "Radius: " << circle.getRadius() << endl;
            cout << "Area: " << circle.getArea() << endl;
            cout << "Perimeter: " << circle.getPerimeter() << endl;
        }
    } while (rad != 0);
    return 0;
}