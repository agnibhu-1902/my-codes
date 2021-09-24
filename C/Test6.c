#include <stdio.h>
int binary_search(int a[], int n, int x);
int main()
{
    int a[10], n, x, flag, i;
    printf("Enter the value of the array::");
    scanf("%d", &n);
    printf("..Please Enter element in assending order..\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the element at position a[%d]::", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search::");
    scanf("%d", &x);
    flag = binary_search(a, n, x);
    if (flag == -1)
        printf("Number is not found!!");
    else
        printf("Number is found..");
}
int binary_search(int a[], int n, int x)
{
    int low , high , middle;
    low=0;
    high=n-1;
    while (low <= high)
    {
        middle = ((low + high) / 2);
        if (x == a[middle])
            return middle;
        else if (x < a[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    return -1;
}
