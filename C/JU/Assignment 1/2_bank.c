#include <stdio.h>
#define len 4
int main()
{
    int arr[] = {100, 50, 20, 10}, i, count = 0, amt;
    printf("Enter amount: ");
    scanf("%d", &amt);
    for (i = 0; i < len; i++)
    {
        if (amt >= arr[i])
        {
            count += amt / arr[i];
            printf("Notes of denomination %d: %d\n", arr[i], amt / arr[i]);
            amt %= arr[i];
        }
    }
    printf("Minimum no. of notes required: %d\n", count);
    return 0;
}