#include <stdio.h>
#include <stdlib.h>
void shift_zeros(int *, int);
int main()
{
    int *arr, n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *) calloc(n, sizeof(int));
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    shift_zeros(arr, n);
    printf("Updated elements: ");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
void shift_zeros(int *arr, int n)
{
    int i, j, x = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == 0)
        {
            for (j = i - 1; j >= x; j--)
                arr[j + 1] = arr[j];
            arr[x++] = 0;
        }
}