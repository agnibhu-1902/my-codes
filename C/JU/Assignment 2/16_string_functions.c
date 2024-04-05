#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100
int Strlen(char *);
char *Strcpy(char *, char *);
char *Strcat(char *, char *);
char *Strrev(char *);
int Strcmp(char *, char *);
int main()
{
    char str[MAX_LENGTH], nstr[MAX_LENGTH], constr[MAX_LENGTH], *temp, trap; int ch;
    printf("Enter first string: ");
    scanf("%[^\n]%c", str, &trap);
    printf("Enter second string: ");
    scanf("%[^\n]%c", constr, &trap);
    for (;;)
    {
        printf("========== MENU ==========\n");
        printf("1. Strlen()\n2. Strcpy()\n3. Strcat()\n4. Strrev()\n5. Strcmp()\n6. Quit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("Length of string 1: %d\n", Strlen(str));
                break;
            case 2:
                printf("Copied string 1: %s\n", Strcpy(nstr, str));
                break;
            case 3:
                temp = Strcat(str, constr);
                printf("Concatenated string: %s\n", temp);
                break;
            case 5:
                printf("Compared value of string 1 and string 2: %d\n", Strcmp(str, constr));
                break;
            case 4:
                printf("Reverse of string 1: %s\n", Strrev(str));
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    free(temp);
    return 0;
}
int Strlen(char *str)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}
char *Strcpy(char *dest, char *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}
char *Strcat(char *str1, char *str2)
{
    int i, len1 = Strlen(str1), len2 = Strlen(str2);
    char *nstr = (char *) calloc(len1 + len2, sizeof(char));
    for (i = 0; str1[i] != '\0'; i++)
        nstr[i] = str1[i];
    for (i = 0; str2[i] != '\0'; i++)
        nstr[len1 + i] = str2[i];
    return nstr;
}
int Strcmp(char *str1, char *str2)
{
    int i, len1 = Strlen(str1), len2 = Strlen(str2), min;
    min = (len1 < len2) ? len1 : len2;
    for (i = 0; i < min; i++)
        if(str1[i] != str2[i])
            return str1[i] - str2[i];
    return len1 - len2;
}
char *Strrev(char *str)
{
    int i, j, n = Strlen(str); char temp;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}