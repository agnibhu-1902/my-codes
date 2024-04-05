#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 100
int main()
{
    char str[MAX_LIMIT]; int i;
    printf("Enter a line of text: ");
    fgets(str, MAX_LIMIT, stdin);
    printf("\nEntered string: %s\n", str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    printf("Converted string: %s\n", str);
    return 0;
}