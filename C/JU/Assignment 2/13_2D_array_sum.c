#include <stdio.h>
#include <stdlib.h>
void sort(int **, int, int);
void matrix_sum(int **, int **, int **, int, int);
int main()
{
    int **mat1, **mat2, **rmat, row, col, i, j, k;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &col);
    mat1 = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        mat1[i] = (int *) calloc(col, sizeof(int));
    mat2 = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        mat2[i] = (int *) calloc(col, sizeof(int));
    rmat = (int **) calloc(row, sizeof(int *));
    for (i = 0; i < row; i++)
        rmat[i] = (int *) calloc(col, sizeof(int));
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &mat2[i][j]);
    sort(mat1, row, col);
    sort(mat2, row, col);
    matrix_sum(rmat, mat1, mat2, row, col);
    printf("Sorted matrix 1:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%4d", mat1[i][j]);
        printf("\n");
    }
    printf("Sorted matrix 2:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%4d", mat2[i][j]);
        printf("\n");
    }
    printf("Sorted resultant matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%4d", rmat[i][j]);
        printf("\n");
    }
    for (i = 0; i < row; i++)
        free(rmat[i]);
    free(rmat);
    for (i = 0; i < row; i++)
        free(mat2[i]);
    free(mat2);
    for (i = 0; i < row; i++)
        free(mat1[i]);
    free(mat1);
    return 0;
}
void sort(int **mat, int row, int col)
{
    int i, j, n = row * col, x = 0, temp, *arr;
    arr = (int *) calloc(n, sizeof(int));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            arr[x++] = mat[i][j];
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    x = 0;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            mat[i][j] = arr[x++];
    free(arr);
}
void matrix_sum(int **rmat, int **mat1, int **mat2, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            rmat[i][j] = mat1[i][j] + mat2[i][j];
}