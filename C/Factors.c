#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Factors are : ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(n!=i)
			printf("%d, ",i);
			else
			printf("%d",i);
		}
	}
	return;
}
