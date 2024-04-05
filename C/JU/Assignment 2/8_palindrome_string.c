#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LIMIT 100
int main()
{
    char str[MAX_LIMIT]; int i, j, n; bool flag = true;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    n = strlen(str);
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    for (i = n; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    for(i = 0, j = n - 1; i < j; i++, j--)
        if (str[i] != str[j])
            flag = false;
    if (flag)
        printf("The entered string is palindrome\n");
    else
        printf("The entered string is not palindrome\n");
    return 0;
}