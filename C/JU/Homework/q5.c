#include <stdio.h>
#include <stdbool.h>
#define limit 100
bool isPrime(int);
int main()
{
    int i, count = 0;
    printf("Prime numbers: ");
    for (i = 1; i < limit; i++)
        if (isPrime(i))
        {
            printf("\t%d", i);
            count++;
        }
    printf("\nCount: %d\n", count);
    return 0;
}
bool isPrime(int n)
{
    int i;
    if (n < 2)
        return false;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}