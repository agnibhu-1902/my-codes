#include <stdio.h>
#include <stdlib.h>
void sort(int *, int);
int main()
{
    int *arr, n, i;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    arr = (int * ) malloc(n * sizeof(int));
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original elemets: ");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    sort(arr, n);
    printf("\nSorted elements: ");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
void sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}