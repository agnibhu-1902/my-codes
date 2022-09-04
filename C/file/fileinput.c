#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    int a, b, count = 1, n;
    fptr = fopen("graph.txt", "r");
    while(!feof(fptr))
    {
        if(count == 1 || count == 2)
        {
            fscanf(fptr, "%d", &a);
            printf("%d\n", a);
        }
        else
        {
            fscanf(fptr, "%d, %d", &a, &b);
            printf("%d, %d\n", a, b);
        }
        count++;
    }
    fclose(fptr);
    return 0;
}
