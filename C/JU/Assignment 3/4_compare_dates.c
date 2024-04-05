#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
typedef struct
{
    /* data */
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;
bool comp_dates(Date *, Date *);
int main()
{
    Date d1, d2;
    printf("Enter first date in dd/mm/yyyy format: ");
    scanf("%u/%u/%u", &d1.day, &d1.month, &d1.year);
    assert((d1.day > 0 && d1.day <= 31) && (d1.month > 0 && d1.month <= 12));
    printf("First date entered is %02u/%02u/%04u.\n", d1.day, d1.month, d1.year);
    printf("Enter second date in dd/mm/yyyy format: ");
    scanf("%u/%u/%u", &d2.day, &d2.month, &d2.year);
    printf("Second date entered is %02u/%02u/%04u.\n", d2.day, d2.month, d2.year);
    assert((d2.day > 0 && d2.day <= 31) && (d2.month > 0 && d2.month <= 12));
    if (comp_dates(&d1, &d2))
        printf("The two dates are equal.\n");
    else
        printf("The two dates are unequal.\n");
    return 0;
}
bool comp_dates(Date *d1, Date *d2)
{
    return d1->day == d2->day && d1->month == d2->month && d1->year == d2->year;
}