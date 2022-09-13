#include "integer.h"

int main(void)
{
    for (int i = 0; i < 1000000; i++)
    {
        try
        {
            Integer integer(i); // Integer wrapper class object
            cout << integer.getValue() << endl;
        }
        catch(...)
        {
            cout << "Exception is thrown!" << endl;
        }
    }
    return 0;
}