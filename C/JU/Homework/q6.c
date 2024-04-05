#include <stdio.h>
#include <stdbool.h>
#define limit 20
bool isPrime(int);
void printFactors(int);
int main()
{
    int i;
    printf("Number\tFactors\n");
    for (i = 2; i <= limit; i++)
        if (!isPrime(i))
            printFactors(i);
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
void printFactors(int n)
{
    int i;
    printf("\n%d\t", n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}