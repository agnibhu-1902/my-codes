#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
bool isArmstrong(int n)
{
    int w = n, s = 0;
    while (w != 0)
    {
        s += pow(w % 10, 3);
        w /= 10;
    }
    if (s == n)
        return true;
    else
        return false;
}