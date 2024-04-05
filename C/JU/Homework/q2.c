#include <stdio.h>
#define limit 10
int main()
{
    int x, i, prev = 1;
    printf("List of square numbers: ");
    for (i = 1, x = 3; i <= limit; i++, x += 2)
    {
        if (i != limit)
            printf("%d, ", prev += x);
        else
            printf("%d", prev += x);
    }
    printf("\n");
    return 0;
}