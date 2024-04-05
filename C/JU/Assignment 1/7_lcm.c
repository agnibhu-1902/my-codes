#include <stdio.h>
int gcd_euclid(int, int);
int main()
{
    int num, den, choice, result;
    printf("Enter numerator: ");
    scanf("%d", &num);
    printf("Enter denominator: ");
    scanf("%d", &den);
    printf("LCM of %d & %d is %d\n", num, den, (num * den) / gcd_euclid(num, den));
    return 0;
}
int gcd_euclid(int num, int den)
{
    int a = (num > den) ? num : den;
    int b = (a == num) ? den : num;
    if (a % b == 0)
        return b;
    else
        return gcd_euclid(b, a % b);
}