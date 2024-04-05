#include <stdio.h>
#include <assert.h>
typedef struct
{
    /* data */
    unsigned short int hr;
    unsigned short int min;
    unsigned short int sec;
} time;
time add(time, time);
int main()
{
    time t1, t2, t;
    printf("Enter time value 1 in hh:mm:ss format: ");
    scanf("%hu:%hu:%hu", &t1.hr, &t1.min, &t1.sec);
    assert((t1.hr >= 0 && t1.hr < 24) && (t1.min >= 0 && t1.min < 60) && (t1.sec >= 0 && t1.sec < 60));
    printf("Time entered is %02hu:%02hu:%02hu.\n", t1.hr, t1.min, t1.sec);
    printf("Enter time value 2 in hh:mm:ss format: ");
    scanf("%hu:%hu:%hu", &t2.hr, &t2.min, &t2.sec);
    assert((t2.hr >= 0 && t2.hr < 24) && (t2.min >= 0 && t2.min < 60) && (t2.sec >= 0 && t2.sec < 60));
    printf("Time entered is %02hu:%02hu:%02hu.\n", t2.hr, t2.min, t2.sec);
    t = add(t1, t2);
    printf("After adding time values, final time is %02hu:%02hu:%02hu.\n", t.hr, t.min, t.sec);
    return 0;
}
time add(time t1, time t2)
{
    time t;
    t.hr = t.min = t.sec = 0;
    t.sec = t1.sec + t2.sec;
    if (t.sec >= 60)
    {
        t.min = t.sec / 60;
        t.sec %= 60;
    }
    t.min += t1.min + t2.min;
    if (t.min >= 60)
    {
        t.hr = t.min / 60;
        t.min %= 60;
    }
    t.hr += t1.hr + t2.hr;
    if (t.hr >= 24)
        t.hr = 0;
    return t;
}