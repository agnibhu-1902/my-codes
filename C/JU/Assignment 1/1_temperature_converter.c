#include <stdio.h>
#include <stdlib.h>
int main()
{
    float temp; int ch;
    for(;;)
    {
        printf("========== MENU ==========");
        printf("\n1. Convert to Centigrade\n2. Convert to Fahrenheit\n3. Quit\n\nEnter choice: ");
        scanf("%d", &ch);
        if (ch == 1 || ch == 2)
        {
            printf("Enter temperature: ");
            scanf("%f", &temp);
        }
        switch(ch)
        {
            case 1:
                printf("\nEquivalent temperure in Centigrade: %.2f\n\n", 5 / (float) 9 * (temp - 32));
                break;
            case 2:
                printf("\nEquivalent temperature in Fahrenheit: %.2f\n\n", 9 / (float) 5 * temp + 32);
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid choice!\n\n");
        }
    }
    return 0;
}