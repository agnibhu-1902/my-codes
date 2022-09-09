#include "rectangle.h"

Rectangle :: Rectangle(double ln, double wd)
    : length(ln), width(wd)
{
    if(!isValid())
        assert(false);
}

Rectangle :: ~Rectangle()
{
}

void Rectangle :: print() const
{
    cout << "Rectangle of length " << length << " and width " << width << " unit(s)." << endl;
}

double Rectangle :: getArea() const
{
    return length * width;
}

double Rectangle :: getPerimeter() const
{
    return 2 * (length + width);
}

bool Rectangle :: isValid() const
{
    return length > 0.0 && width > 0.0;
}