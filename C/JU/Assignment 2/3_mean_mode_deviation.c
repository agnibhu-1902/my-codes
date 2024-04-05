#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sort(int *, int);
int main()
{
    int n, i, *arr, count = 0, pos, max; float mean, sum = 0.0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    arr = (int *) calloc(n, sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Array:");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    mean = sum / n;
    printf("\nMean: %.2f\n", mean);
    printf("Mode: ");
    sort(arr, n);
    max = 0; pos = 0;
    for (i = 0; i < n - 1; i++)
        if (arr[i] == arr[i + 1])
            count++;
        else
        {
            count++;
            if (count > max)
            {
                max = count;
                pos = i;
            }
            count = 0;
        }
    count++;
    if (count > max)
    {
        max = count;
        pos = i;
    }
    printf("%d\n", arr[pos]);
    sum = 0;
    for (i = 0; i < n; i++)
        sum += pow(arr[i] - mean, 2);
    printf("Standard deviation: %.2f\n", sqrt(sum / (n - 1)));
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