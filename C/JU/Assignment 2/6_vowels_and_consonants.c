#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LIMIT 100
#pragma GCC diagnostic ignored "-Wall"
bool isVowel(char);
int main()
{
    char str[MAX_LIMIT]; int i, countVowel, countConsonant;
    countVowel = countConsonant = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        if(isalpha(str[i]))
        {
            if(isVowel(str[i]))
                countVowel++;
            else
                countConsonant++;
        }
    printf("Vowels: %d\n", countVowel);
    printf("Consonants: %d\n", countConsonant);
    return 0;
}
bool isVowel(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return true;
        default: return false;
    }
}