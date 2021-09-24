#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter height : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n/2;i++)
	{
		for(k=i;k<n/2;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=n/2;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=n/2;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
