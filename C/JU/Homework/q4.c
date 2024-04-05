#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k, n, x = 0, *arr, *narr, count = 0, flag, dupflag;
    printf("Enter the no. of array elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    arr = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = i + 1; j < n; j++)
            if(arr[i] == arr[j])
            {
                for(k = 0; k < i; k++)
                    if (arr[i] == arr[k])
                        flag = 1;
                if (!flag)
                {
                    count++;
                    break;
                }
            }
    }
    narr = (int*) malloc((n - count) * sizeof(int));
    for (i = 0; i < n; i++)
    {
        dupflag = 0; flag = 0;
        for (j = i + 1; j < n; j++)
            if(arr[i] == arr[j])
            {
                for(k = 0; k < i; k++)
                    if (arr[i] == arr[k])
                        flag = 1;
                if(!flag)
                    dupflag = 1;
            }
        for(k = 0; k < i; k++)
            if (arr[i] == arr[k])
                flag = 1;
        if (!dupflag && !flag)
            narr[x++] = arr[i];
    }
    printf("Count of duplicate elements in the array: %d\n", count);
    printf("Unique elements: ");
    for (i = x - 1; i >= 0; i--)
        printf("%d\t", narr[i]);
    printf("\n");
    free(narr);
    free(arr);
    return 0;
}