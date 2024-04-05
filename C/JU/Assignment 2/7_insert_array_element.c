#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void sort(int *, int);
int main()
{
    int n, i, x = 0, elem; int *arr, *newarr; bool flag;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    arr = (int *) calloc(n, sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, n);
    newarr = (int *)calloc(n + 1, sizeof(int));
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    for (i = 0; i < n;)
        if (arr[i] > elem && !flag)
        {
            newarr[x++] = elem;
            flag = true;
        }
        else
            newarr[x++] = arr[i++];
    if (!flag)
        newarr[x] = elem;
    printf("Original sorted array:");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    printf("\nArray after inserting %d:", elem);
    for (i = 0; i <= n; i++)
        printf("\t%d", newarr[i]);
    printf("\n");
    free(newarr);
    free(arr);
    return 0;
}
void sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}