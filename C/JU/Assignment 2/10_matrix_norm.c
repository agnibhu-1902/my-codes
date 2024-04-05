#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int row, col, **arr, i, j, sum = 0;
    printf("Enter row length: ");
    scanf("%d", &row);
    printf("Enter column length: ");
    scanf("%d", &col);
    arr = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        arr[i] = (int *) calloc(col, sizeof(int));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
            sum += pow(arr[i][j], 2);
        }
    printf("\nEntered matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\nNorm: %.2f\n", sqrt(sum));
    for (i = 0; i < row; i++)
        free(arr[i]);
    free(arr);
    return 0;
}