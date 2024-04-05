#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.1415
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        Circle(float);
        ~Circle();
        float area();
};
Circle :: Circle(float rad)
    : radius(rad)
{
}
Circle :: ~Circle()
{
}
float Circle :: area()
{
    return PI * pow(radius, 2);
}
int main()
{
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area of the circle is " << setprecision(2) << fixed << circle.area() << endl;
    return 0;
}