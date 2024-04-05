#include <stdio.h>
#define MAX_LIMIT 10
int main()
{
    int i, j, value;
    for (i = 1; i <= MAX_LIMIT; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
                value = 1;
            else
                value = value * (i - j + 1) / (j - 1);
            printf("%4d", value);
        }
        printf("\n");
    }
    return 0;
}