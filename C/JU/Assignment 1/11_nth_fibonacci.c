#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double nth_fibonacci_formula(int);
int nth_fibonacci(int);
float power(float, int);
int main()
{
    int n, ch;
    for(;;)
    {
        printf("========== MENU ==========");
        printf("\n1. Generate Fibonacci Using Formula\n2. Generate Fibonacci Without Using Formula\n3. Quit\n\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("\nnth Fibonacci number using formula: %lf\n\n", nth_fibonacci_formula(n - 1));
                break;
            case 2:
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("\nnth Fibonacci number without using formula: %d\n\n", nth_fibonacci(n));
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid choice!\n\n");
        }
    }
    return 0;
}
double nth_fibonacci_formula(int n)
{
    return 1 / sqrt(5) * power((1 + sqrt(5)) / 2, n) - 1 / sqrt(5) * power((1 - sqrt(5)) / 2, n);
}
int nth_fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    for (i = 0; i < n - 2; i++)
    {
        c = a + b;
        a = b; b = c;
    }
    return c;
}
float power(float a, int b)
{
    int i; float res = 1;
    for (i = 1; i <= b; i++)
        res *= a;
    return res;
}