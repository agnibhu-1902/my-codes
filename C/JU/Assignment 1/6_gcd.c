#include <stdio.h>
#include <stdlib.h>
int gcd_euclid(int, int);
int gcd_factorize(int, int);
int main()
{
    int num, den, choice, result;
    for (;;)
    {
        printf("\n========== MENU ==========");
        printf("\n1. Euclid's Algorithm\n2. Factorization Method\n3. Quit\n\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2)
        {
            printf("Enter numerator: ");
            scanf("%d", &num);
            printf("Enter denominator: ");
            scanf("%d", &den);
        }
        switch(choice)
        {
            case 1: result = gcd_euclid(num, den); break;
            case 2: result = gcd_factorize(num, den); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");
        }
        printf("\nGCD of %d/%d is %d\n\n", num, den, result);
    }
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
int gcd_factorize(int num, int den)
{
    int max = 1, i, min = (num > den) ? den : num;
    for (i = 1; i <= min; i++)
        if (num % i == 0 && den % i == 0)
            max = i;
    return max;
}