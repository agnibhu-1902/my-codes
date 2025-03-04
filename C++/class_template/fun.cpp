#ifndef FUN_CPP
#define FUN_CPP
#include "fun.h"

// Constructor
template <typename T>
Fun <T> :: Fun(T d)
    : data(d)
{
}

// Destructor
template <typename T>
Fun <T> :: ~Fun()
{
}

// Accessor function
template <typename T>
T Fun <T> :: get() const
{
    return data;
}

// Mutator function
template <typename T>
void Fun <T> :: set(T d)
{
    data = d;
}

#endif