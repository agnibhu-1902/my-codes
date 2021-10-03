#include<stdio.h>
#include<stdlib.h>

//Function prototypes
void strictlyDominant(float**, int);
void toUpperTriangular(float**, int);
void backSubstitution(float**, float*, int);

int main()
{
    int i, j, n; float **a, *value;
    printf("\nEnter the number of unknown values : ");
    scanf("%d", &n); //Accept the number of unknown variables

    //Declare a 2D array
    a = (float**)malloc(n * sizeof(float));
    for(i = 0; i < n; i++)
        a[i] = (float*)malloc((n + 1) * sizeof(float));

    value = (float*)malloc(n * sizeof(float));

    printf("\nEnter the augmented matrix :\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n+1; j++)
            scanf("%f", &a[i][j]); //Accept values into the matrix
    }

    //Function calls
    strictlyDominant(a, n);
    toUpperTriangular(a, n);
    backSubstitution(a, value, n);

    printf("\nThe computed values are :\n");
    for(i = 0; i < n; i++)
        printf("%.2f\n", value[i]); //Print the values of unknown variables
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
    int i, j, k, sum, max, index, count = 0; float *temp;
    for(i = 0; i < n;)
    {
        sum = 0;
        max = abs(a[i][i]); index = i;
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                sum += abs(a[i][j]); //Sum of individual rows except diagonal
                if(abs(a[i][j]) > max)
                {
                    max = abs(a[i][j]); //Assign max value
                    index = j;
                }
            }
        }
        if (abs(a[i][i]) < sum) //When not strictly dominant
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

void toUpperTriangular(float **a, int n)
{
    int i, j, k; float pivot;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j > i)
            {
                pivot = a[j][i] / a[i][i]; //Take the pivot of each element of the next row to the diagonal element of the previous row
                for(k = 0; k < n+1; k++)
                    a[j][k] = a[j][k] - pivot * a[i][k]; //Will make some elements zero and convert into an upper triangular matrix
            }
        }
    }
}

void backSubstitution(float **a, float *value, int n)
{
    int i, j; float sum;
    value[n-1] = a[n-1][n] / a[n-1][n-1]; //Evaluate the value of the last unknown variable

    for(i = n - 2; i >= 0; i--)
    {
        sum = 0.0;
        for(j = i + 1; j < n; j++)
            sum += a[i][j] * value[j];
        value[i] = (a[i][n] - sum) / a[i][i]; //Evaluate the values of the rest of the unknown variables
    }
}