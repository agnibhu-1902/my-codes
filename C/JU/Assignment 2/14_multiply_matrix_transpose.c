#include <stdio.h>
#include <stdlib.h>
void transpose(int **, int **, int, int);
void mat_transpose_multiply(int **, int **, int **, int, int);
int main()
{
    int row, col, **arr, **tarr, **mularr, i, j;
    printf("Enter row length: ");
    scanf("%d", &row);
    printf("Enter column length: ");
    scanf("%d", &col);
    arr = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        arr[i] = (int *) calloc(col, sizeof(int));
    tarr = (int **) calloc(col, sizeof(int *));
    for (i = 0; i < col; i++)
        tarr[i] = (int *) calloc(row, sizeof(int));
    mularr = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        mularr[i] = (int *) calloc(row, sizeof(int));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    printf("\nEntered matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    transpose(tarr, arr, row, col);
    printf("\nTransposed matrix:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
            printf("%d\t", tarr[i][j]);
        printf("\n");
    }
    mat_transpose_multiply(mularr, arr, tarr, row, col);
    printf("\nMatrix after multiplication:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
            printf("%d\t", mularr[i][j]);
        printf("\n");
    }
    for (i = 0; i < row; i++)
        free(mularr[i]);
    free(mularr);
    for (i = 0; i < col; i++)
        free(tarr[i]);
    free(tarr);
    for (i = 0; i < row; i++)
        free(arr[i]);
    free(arr);
    return 0;
}
void transpose(int **tarr, int **arr, int row, int col)
{
    int i, j, x, y; x = y = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            tarr[x++][y] = arr[i][j];
        y++; x = 0;
    }
}
void mat_transpose_multiply(int **mularr, int **arr, int **tarr, int row, int col)
{
    int i, j, k, row2 = col, col2 = row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col; k++)
                mularr[i][j] += arr[i][k] * tarr[k][j];
        }
    }
}