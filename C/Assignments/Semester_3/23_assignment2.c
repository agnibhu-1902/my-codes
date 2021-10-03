//Program to solve a system of linear equation using Gauss-Seidel Iterative method.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define precision 0.001

//Function prototypes
void strictlyDominant(float**, int);
void gaussSeidelIteration(float**, float*, int);

int main()
{
    int i, j, n; float **a, *value;
    printf("\nEnter the number of unknown values : ");
    scanf("%d", &n); //Accept the number of unknown variables

    //Declare a 2D array
    a = (float**)calloc(n, sizeof(float*));
    for(i = 0; i < n; i++)
        a[i] = (float*)calloc((n + 1), sizeof(float));

    value = (float*)calloc(n, sizeof(float));

    printf("\nEnter the augmented matrix :\n");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the coefficients of equation %d:", i + 1);
        for(j = 0; j < n; j++)
        {
            printf("\narr[%d][%d] = ", i+1, j+1);
            scanf("%f", &a[i][j]); //Accept values into the matrix
        }
        printf("\nEnter the constant value of equation %d:", i + 1);
        for(j = n; j < n+1; j++)
        {
            printf("\narr[%d][%d] = ", i+1, j+1);
            scanf("%f", &a[i][j]); //Accept values into the matrix
        }
    }

    //Display the matrix
    printf("\nThe augmented matrix is :\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n+1; j++)
            printf("%.3f\t", a[i][j]);
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        value[i] = 0.0; //Initialise all unknown values to zero
    }

    //Function calls
    strictlyDominant(a, n);
    gaussSeidelIteration(a, value, n);

    //Display the diagonally dominant matrix
    printf("\nThe diagonally dominant augmented matrix is :\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n+1; j++)
            printf("%.3f\t", a[i][j]);
        printf("\n");
    }

    printf("\nThe computed values are :\n");
    for(i = 0; i < n; i++)
        printf("Value %d: %.3f\n", i + 1, value[i]); //Print the values of unknown variables
    printf("\n");
    
    //Free dynamically alocated memory
    for(i = 0; i < n; i++)
        free(a[i]);
    free(a);
    free(value);

    return 0;
}

void strictlyDominant(float **a, int n)
{
    int i, j, k, count = 0, index; float sum, max, *temp;
    for(i = 0; i < n;)
    {
        sum = 0.0;
        max = fabs(a[i][i]); index = i;
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                sum += fabs(a[i][j]); //Sum of individual rows except diagonal
                if(fabs(a[i][j]) > max)
                {
                    max = fabs(a[i][j]); //Assign max value
                    index = j;
                }
            }
        }
        if (fabs(a[i][i]) < sum) //When not strictly dominant
        {
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
            count++;
        }
        else
            i++;
        if(count == n-1)
            break; //Terminate
    }
}

void gaussSeidelIteration(float **a, float *value, int n)
{
    int i, j; float sum, temp, diff;
    do
    {
        temp = value[0];
        for(i = 0; i < n; i++)
        {
            sum = 0.0;
            for(j = 0; j < n; j++)
            {
                if(i != j)
                    sum += a[i][j] * value[j]; //Sum of coefficients except the diagonal coefficient
            }
            value[i] = (a[i][n] - sum) / (float)a[i][i]; //Evaluate the diagonal unknown value
        }
        diff = fabs(value[0] - temp); //Subtract current iteration and previous iteration value
    }
    while(diff > precision); //Correct upto three decimal places
}