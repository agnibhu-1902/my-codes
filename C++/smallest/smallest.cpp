#include "smallest.h"

Smallest :: Smallest()
{
    current = numeric_limits<int> :: max();
}

Smallest :: ~Smallest()
{
}

int Smallest :: operator()(int next)
{
    if (next < current)
        current = next;
    return current;
}