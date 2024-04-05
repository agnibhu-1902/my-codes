#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int *arr, n, i, temp; bool even;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original elemets: ");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    if (n % 2)
        n--;
    else
        even = true;
    for (i = 0; i < n; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    printf("\nSwapped elements: ");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    if (!even)
        printf("\t%d\n", arr[n]);
    else
        printf("\n");
    free(arr);
    return 0;
}