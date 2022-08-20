#include <iostream>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    void normalize();
public:
    Time(int, int, int);
    Time();
    ~Time();
    void print() const;
    void tick();
};

#endif