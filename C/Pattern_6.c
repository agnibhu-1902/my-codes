#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter height : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(k=i;k<n;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
}
