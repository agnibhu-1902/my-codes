#include <stdio.h>
#include<stdlib.h>
int linear_search(int *ptr, int n, int x);
int main()
{
    int i, n, x, flag;
    int *ptr;
    printf("Enter the limit of the array.");
    scanf("%d", &n);
    ptr=(int *) malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the element of a[%d]:", i);
        scanf("%d", &ptr[i]);
    }
    printf("Enter the element which you want to search:");
    scanf("%d", &x);
    flag = linear_search(ptr, n, x);
    if (flag ==1)
        printf("Element found!!");
    else
        printf("Element is not found!!");
    free(ptr);
}
int linear_search(int *ptr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (ptr[i] == x)
        {
            return (1);
        }
    }
    return(0);
}
