#include "square.h"

Square :: Square(double s)
    : side(s)
{
    if(!isValid())
        assert(false);
}

Square :: ~Square()
{
}

void Square :: print() const
{
    cout << "Square of side " << side << " unit(s)." << endl;
}

double Square :: getArea() const
{
    return side * side;
}

double Square :: getPerimeter() const
{
    return 4 * side;
}

bool Square :: isValid() const
{
    return side > 0.0;
}