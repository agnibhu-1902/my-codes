#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Time
{
    int hr, min, sec;
    public:
        friend istream& operator>>(istream &, Time &);
        friend ostream& operator<<(ostream &, Time const &);
        Time operator+(Time const &);
        bool operator==(Time const &);
};

istream& operator>>(istream &in, Time &t)
{
    string timestr;
    in >> timestr;
    istringstream iss(timestr);
    char colon1, colon2;
    iss >> t.hr >> colon1 >> t.min >> colon2 >> t.sec;
    if (iss.fail() || colon1 != ':' || colon2 != ':' || t.hr >= 24 || t.min >= 60 || t.sec >= 60)
    {
        cout << "Invalid input!" << endl;
        exit(0);
    }
    return in;
}

ostream& operator<<(ostream &out, Time const &t)
{
    out << setw(2) << setfill('0') << t.hr << ":" << setw(2) << setfill('0') << t.min << ":" << setw(2) << setfill('0') << t.sec;
    return out;
}

Time Time :: operator+(Time const &obj)
{
    Time res;
    res.hr = hr + obj.hr;
    res.min = min + obj.min;
    res.sec = sec + obj.sec;
    if (res.sec >= 60)
    {
        res.min += res.sec / 60;
        res.sec %= 60;
    }
    if (res.min >= 60)
    {
        res.hr += res.min / 60;
        res.min %= 60;
    }
    if (res.hr >= 24)
        res.hr %= 24;
    return res;
}

bool Time :: operator==(Time const &obj)
{
    return hr == obj.hr && min == obj.min && sec == obj.sec;
}

int main()
{
    Time t1obj, t2obj, res;
    cout << "Enter time in hr:min:sec format: ";
    cin >> t1obj;
    cout << "Enter time in hr:min:sec format: ";
    cin >> t2obj;
    res = t1obj + t2obj;
    cout << "Resultant time: " << res << endl;
    if (t1obj == t2obj)
        cout << "The time values are equal" << endl;
    else
        cout << "The time values are unequal" << endl;
    return 0;
}