#include "sp.h"

SP :: SP(int* p)
    : ptr(p)
{
}

SP :: ~SP()
{
    delete ptr;
}

int& SP :: operator*() const
{
    return *ptr;
}

int* SP :: operator->() const
{
    return ptr;
}