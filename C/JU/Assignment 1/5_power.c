#include <stdio.h>
int main()
{
    float base, power = 1; int exp, i;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    for(i = 1; i <= exp; i++)
        power *= base;
    printf("%.2f ^ %d = %.2f\n", base, exp, power);
    return 0;
}