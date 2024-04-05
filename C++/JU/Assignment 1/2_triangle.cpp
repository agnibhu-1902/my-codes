#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Triangle
{
    private:
        float side1;
        float side2;
        float side3;
    public:
        void input(float side1, float side2, float side3)
        {
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
        }
        void print();
    protected:
        float area()
        {
            float s = (side1 + side2 + side3) / (float) 2;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
        float perimeter();
};
float Triangle :: perimeter()
{
    return side1 + side2 + side3;
}
void Triangle :: print()
{
    cout << "Properties of the triangle:" << endl;
    cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    cout << "Area: " << setprecision(2) << fixed << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
int main()
{
    Triangle triangle;
    float a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    triangle.input(a, b, c);
    triangle.print();
    return 0;
}