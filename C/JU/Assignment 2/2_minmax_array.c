#include <stdio.h>
#include <stdlib.h>
int min(int *, int);
int max(int *, int);
int main()
{
    int *arr, n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array elements:");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    printf("\n");
    printf("Minimum element: %d\n", min(arr, n));
    printf("Maximum element: %d\n", max(arr, n));
    free(arr);
    return 0;
}
int min(int *arr, int n)
{
    int min = arr[0], i;
    if (n == 1)
        return min;
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
int max(int *arr, int n)
{
    int max = arr[0], i;
    if (n == 1)
        return max;
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}