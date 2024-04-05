#include <iostream>
using namespace std;

class Shape
{
    public:
        void print()
        {
            cout << "This is a shape" << endl;
        }
};

class Polygon : public Shape
{
    public:
        void print()
        {
            cout << "Polygon is a shape" << endl;
        }
};

class Rectangle : public Polygon
{
    public:
        void print()
        {
            cout << "Rectangle is a polygon" << endl;
        }
};

class Triangle : public Polygon
{
    public:
        void print()
        {
            cout << "Triangle is a polygon" << endl;
        }
};

class Square : public Rectangle
{
    public:
        void print()
        {
            cout << "Square is a rectangle" << endl;
        }
};

int main()
{
    Shape shapeobj; Polygon polygonobj; Rectangle rectangleobj; Triangle triangleobj; Square squareobj;
    shapeobj.print();
    polygonobj.print();
    rectangleobj.print();
    triangleobj.print();
    squareobj.print();
    return 0;
}