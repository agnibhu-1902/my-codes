#include<stdio.h>
int main()
{
	int i,j,k,h;
	printf("Enter height : ");
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		for(k=1;k<i;k++)
			printf(" ");
		for(j=h;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}
}
