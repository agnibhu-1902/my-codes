#include <stdio.h>
#include <stdbool.h>
int reverse(int);
bool is_palindrome(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number: %d\n", reverse(n));
    if (is_palindrome(n))
        printf("%d is a palindrome number\n", n);
    else
        printf("%d is not a palindrome number\n", n);
    return 0;
}
int reverse(int n)
{
    int s = 0;
    while (n)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
bool is_palindrome(int n)
{
    return n == reverse(n);
}