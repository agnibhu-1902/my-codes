#include <stdio.h>
#include <stdbool.h>
bool is_prime(int);
int main()
{
    int n, i;
    printf("Enter ending range: ");
    scanf("%d", &n);
    printf("Prime numbers:");
    for (i = 1; i <= n; i++)
        if (is_prime(i))
            printf("\t%d", i);
    printf("\n");
    return 0;
}
bool is_prime(int n)
{
    int i;
    if (n == 1)
        return false;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}