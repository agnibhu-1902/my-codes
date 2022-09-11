#include "smallest.h"

int main (void)
{
// Instantiation of an smallest object
Smallest smallest;
// Applying the function call operator to objects
cout << "Smallest so far: " << smallest (5) << endl;
cout << "Smallest so far: " << smallest (9) << endl;
cout << "Smallest so far: " << smallest (4) << endl;
return 0;
}