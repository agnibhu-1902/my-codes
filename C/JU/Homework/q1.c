#include <stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a = 0, b = 1, c, i; n -= 2;
    printf("Fibonacci Series: %d\t%d", a, b);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("\t%d", c);
        a = b; b = c;
    }
    printf("\n");
}