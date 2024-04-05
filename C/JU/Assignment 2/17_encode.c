#include <stdio.h>
#include <ctype.h>
#define MAX_LIMIT 100
int main()
{
    char instr[MAX_LIMIT], outstr[MAX_LIMIT]; int i;
    printf("Enter a string: ");
    scanf("%[^\n]", instr);
    for(i = 0; instr[i] != '\0'; i++)
        if (isalnum(instr[i]))
            outstr[i] = instr[i] + 1;
        else
            outstr[i] = instr[i];
    printf("Original string: %s\n", instr);
    printf("Encoded string: %s\n", outstr);
    return 0;
}