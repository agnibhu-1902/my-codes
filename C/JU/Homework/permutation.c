#include <stdio.h>
#include <stdlib.h>
void permute(int *, int);
void swap_and_print(int *, int, int, int);
int main()
{
    int n, w, num, *arr;
    printf("Enter value of n: ");
    arr = (int *) malloc(n * sizeof(int));
    scanf("%d", &n);
    w = n;
    printf("Enter the number to permute: ");
    scanf("%d", &num);
    while (num)
    {
        arr[--w] = num % 10;
        num /= 10;
    }
    permute(arr, n);
    free(arr);
    return 0;
}
void permute(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            swap_and_print(arr, i, j, n);
        }
}
void swap_and_print(int *arr, int i, int j, int n)
{
    int *narr = (int *) malloc(n * sizeof(int));
    int temp, k;
    for (k = 0; k < n; k++)
        narr[k] = arr[k];
    temp = narr[i];
    narr[i] = narr[j];
    narr[j] = temp;
    for (k = 0; k < n; k++)
        printf("%d", narr[k]);
    printf("\n");
    free(narr);
}