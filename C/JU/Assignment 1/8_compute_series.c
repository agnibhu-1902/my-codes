#include <stdio.h>
#include <math.h>
#define PI 3.1415
float cosine(float, int);
float sine(float, int);
float logarithm(float, int);
float custom(int);
int factorial(int);
float power(float, int);
int main()
{
    float val, res; int limit, ch;
    do
    {
        printf("========== MENU ==========\n");
        printf("1. Sine\n2. Cosine\n3. log(1 + x)\n4. 1/1!+2/2!+3/3!+... upto 10 terms\n5. Exit\n\nEnter choice: ");
        scanf("%d", &ch);
        if (ch >= 1 && ch <= 3)
        {
            printf("Enter value: ");
            scanf("%f", &val);
            val = val * PI / 180;
            printf("Enter limit: ");
            scanf("%d", &limit);
        }
        switch (ch)
        {
            case 1:
                res = sine(val, limit);
                break;
            case 2:
                res = cosine(val, limit);
                break;
            case 3:
                res = logarithm(val, limit);
                break;
            case 4:
                res = custom(10);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice!\n\n");
        }
        if (ch >= 1 && ch <= 4)
            printf("Result: %.2f\n\n", res);
    } while (ch != 5);
    return 0;
}
float sine(float val, int limit)
{
    float res = 0; int c = 1, i;
    for (i = 1; i <= limit; i += 2)
    {
        res += c * power(val, i) / factorial(i);
        c *= -1;
    }
    return res;
}
float cosine(float val, int limit)
{
    float res = 0; int c = 1, i;
    for (i = 0; i < limit; i += 2)
    {
        res += c * power(val, i) / factorial(i);
        c *= -1;
    }
    return res;
}
float logarithm(float val, int limit)
{
    float res = 0; int c = 1, i;
    for (i = 1; i <= limit; i++)
    {
        res += c * power(val, i) / i;
        c *= -1;
    }
    return res;
}
float custom(int n)
{
    float res = 0; int i;
    for (i = 1; i <= n; i++)
        res += i / (float) factorial(i);
    return res;
}
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
float power(float a, int b)
{
    int i; float res = 1;
    for (i = 1; i <= b; i++)
        res *= a;
    return res;
}