#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
const int IST = 5 * 3600 + 30 * 60;

int main()
{
    unsigned long elapsedSeconds = time(0);
    elapsedSeconds += IST;
    unsigned int currentSecond = elapsedSeconds % 60;
    unsigned long elapsedMinutes = elapsedSeconds / 60;
    unsigned int currentMinute = elapsedMinutes % 60;
    unsigned long elapsedHours = elapsedMinutes / 60;
    unsigned int currentHour = elapsedHours % 24;
    cout << right << setfill('0');
    cout << "The current time is " << setw(2) << currentHour << ":" << setw(2) << currentMinute << ":" << setw(2) << currentSecond << "." << endl;
    return 0;
}