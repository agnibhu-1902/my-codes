#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **mat1, **mat2, **rmat, n, i, j, k;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    mat1 = (int **) calloc(n, sizeof(int *));
    for (i = 0; i < n; i++)
        mat1[i] = (int *) calloc(n, sizeof(int));
    mat2 = (int **) calloc(n, sizeof(int *));
    for (i = 0; i < n; i++)
        mat2[i] = (int *) calloc(n, sizeof(int));
    rmat = (int **) calloc(n, sizeof(int *));
    for (i = 0; i < n; i++)
        rmat[i] = (int *) calloc(n, sizeof(int));
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                rmat[i][j] += mat1[i][k] * mat2[k][j];
    printf("Matrix 1:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", mat1[i][j]);
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", mat2[i][j]);
        printf("\n");
    }
    printf("Resultant matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", rmat[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
        free(rmat[i]);
    free(rmat);
    for (i = 0; i < n; i++)
        free(mat2[i]);
    free(mat2);
    for (i = 0; i < n; i++)
        free(mat1[i]);
    free(mat1);
}