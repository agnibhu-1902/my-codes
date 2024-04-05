#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class Shape
{
    protected:
        string shapename;
    public:
        Shape(const string &);
        virtual ~Shape();
        virtual double area() const = 0;
        virtual void display() const;
};

class Circle : public Shape
{
    double radius;
    public:
        Circle(const string &, double);
        ~Circle();
        double area() const;
        void display() const;
};

class Rectangle : public Shape
{
    double length, breadth;
    public:
        Rectangle(const string &, double, double);
        ~Rectangle();
        double area() const;
        void display() const;
};

class Trapezoid : public Shape
{
    double base1, base2, height;
    public:
        Trapezoid(const string &, double, double, double);
        ~Trapezoid();
        double area() const;
        void display() const;
};

Shape::Shape(const string &name)
    : shapename(name)
{
}

void Shape::display() const
{
    cout << "Shape: " << shapename << endl;
}

Shape::~Shape()
{
    cout << "Destructor of Shape called for " << shapename << endl;
}

Circle::Circle(const string &name, double rad)
    : Shape(name), radius(rad)
{
}

Circle::~Circle()
{
    cout << "Destructor of Circle called for " << shapename << endl;
}

double Circle::area() const
{
    return M_PI * pow(radius, 2);
}

void Circle::display() const
{
    Shape::display();
    cout << "Radius: " << radius << endl;
}

Rectangle::Rectangle(const string &name, double l, double b)
    : Shape(name), length(l), breadth(b)
{
}

Rectangle::~Rectangle()
{
    cout << "Destructor of Rectangle called for " << shapename << endl;
}

double Rectangle::area() const
{
    return length * breadth;
}

void Rectangle::display() const
{
    Shape::display();
    cout << "Length: " << length << endl << "Breadth: " << breadth << endl;
}

Trapezoid::Trapezoid(const string &name, double b1, double b2, double h)
    : Shape(name), base1(b1), base2(b2), height(h)
{
}

Trapezoid::~Trapezoid()
{
    cout << "Destructor of Trapezoid called for " << shapename << endl;
}

double Trapezoid::area() const
{
    return 1 / static_cast<double>(2) * (base1 + base2) * height;
}

void Trapezoid::display() const
{
    Shape::display();
    cout << "Length of base 1: " << base1 << endl << "Length of base 2: " << base2 << endl << "Height: " << height << endl;
}

int main()
{
    Shape *shapes[] = {
        new Circle("Circle1", 5.0),
        new Rectangle("Rectangle1", 4.5, 6.0),
        new Trapezoid("Trapezoid1", 5.2, 9.6, 5.0)
    };
    cout << fixed << setprecision(2);
    for (int i = 0; i < 3; i++)
    {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
    }
    for (int i = 0; i < 3; i++)
        delete shapes[i];
    return 0;
}