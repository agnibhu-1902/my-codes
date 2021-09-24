//Matrix Multiplication
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,n;
	printf("Enter no. of rows/columns of matrix : ");
	scanf("%d",&n);
	printf("Enter elements in 1st array : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter elements in 2nd array : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	printf("Final array after multiplication\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
