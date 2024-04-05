#include <stdio.h>
#include <stdlib.h>
int element_index(int *, int, int);
int main()
{
    int n, *arr, elem, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array elements:");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &elem);
    if (element_index(arr, n, elem) != -1)
        printf("%d found at index %d\n", elem, element_index(arr, n, elem));
    else
        printf("%d is not found\n", elem);
    free(arr);
    return 0;
}
int element_index(int *arr, int n, int elem)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == elem)
            return i;
    return -1;
}