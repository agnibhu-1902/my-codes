#ifndef INTEGER_H
#define INTEGER_H
#include "sp.h"

class Integer
{
private:
    SP sp;
public:
    Integer(int);
    ~Integer();
    int getValue();
};

#endif