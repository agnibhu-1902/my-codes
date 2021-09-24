#include<stdio.h>
void main()
{
	int n,i,j,ctr=1;
	printf("Enter height : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d ",ctr);
		}
		ctr+=2;
		printf("\n");
	}
}
