#include <stdio.h>
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