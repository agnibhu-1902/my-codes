#include <stdio.h>
#include <stdlib.h>
void M_bubble_sort(int *A, int n);
void bubble_sort(int *A, int n);
int main()
{
    int ch, n;
    int *A;
    A = (int *)malloc(n * sizeof(int));
    do
    {
        printf("\nPress 1 for Bubble sort..\n");
        printf("Press 2 for modified Bubble sort..\n");
        printf("Press 0 for exit..\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            bubble_sort(A, n);
            break;
        case 2:
            M_bubble_sort(A, n);
            break;
        case 0:
            printf("Program end..");
            break;
        default:
            printf("\nInvalid choice!!Please try again..");
        }
    } while (ch != 0);
    free(A);
    return 0;
}
void bubble_sort(int *A, int n)
{
    int temp, i, j;
    do
    {
        printf("\nEnter the limit of the array:");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d] position value:", i);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("\nYour sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d,", A[i]);
    }
}
void M_bubble_sort(int *A, int n)
{
    int temp, x, y;
    int flag;
    do
    {
        printf("\nEnter the limit of the array:");
        scanf("%d", &n);
    } while (n <= 0);
    for (x = 0; x < n; x++)
    {
        printf("Enter the a[%d] position value:", x);
        scanf("%d", &A[x]);
    }
    for (x = 0; x < n - 1; x++)
    {
        flag = 0;
        for (y = 0; y < n - x - 1; y++)
        {
            if (A[y] > A[y + 1])
            {
                flag = 1;
                temp = A[y];
                A[y] = A[y + 1];
                A[y + 1] = temp;
            }
        }
        if (flag == 0)
            break;
    }
    printf("\nYour sorted array is:\n");
    for (x = 0; x < n; x++)
    {
        printf("%d,", A[x]);
    }
}
