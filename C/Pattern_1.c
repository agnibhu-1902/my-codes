#include<stdio.h>
void main()
{
	int h,i,j,c=0;
	printf("Enter height : ");
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		for(j=h-1;j>=i;j--)
		{
			printf("   ");
		}
		for(j=1;j<=i+c;j++)
		{
			printf(" * ");
		}
		printf("\n");
		c++;
	}
	return;
}
