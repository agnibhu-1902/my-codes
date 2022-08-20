#include <cassert>
#include <cmath>
#include <iomanip>
#include "time.h"

Time ::Time(int hr, int min, int sec)
    : hours(hr), minutes(min), seconds(sec)
{
    normalize();
}
Time ::Time()
    : hours(0), minutes(0), seconds(0)
{
}
Time ::~Time()
{
}
void Time ::print() const
{
    cout << right << setfill('0');
    cout << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
}
void Time ::tick()
{
    seconds++;
    normalize();
}
void Time ::normalize()
{
    if(hours < 0 || minutes < 0 || seconds < 0)
    {
        cout << "Invalid data!\nAborting..." << endl;
        assert(false);
    }
    else
    {
        if(seconds > 59)
        {
            int temp = seconds / 60;
            minutes += temp;
            seconds %= 60;
        }
        if(minutes > 59)
        {
            int temp = minutes / 60;
            hours += temp;
            minutes %= 60;
        }
        if(hours > 23)
            hours %= 24;
    }
}