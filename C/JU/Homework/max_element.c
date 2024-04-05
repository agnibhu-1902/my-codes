#include <stdio.h>
#include <stdlib.h>
int max_arr(int *, int);
int max(int, int);
int main()
{
    int *arr, n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *) calloc(n, sizeof(int));
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Maximum element: %d\n", max_arr(arr, n - 1));
    free(arr);
    return 0;
}
int max_arr(int *arr, int n)
{
    if (n == 0)
        return arr[n];
    else
        return max(arr[n], max_arr(arr, n - 1));
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}