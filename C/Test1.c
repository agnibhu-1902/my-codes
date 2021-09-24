#include<stdio.h>
void main()
{
	int div=2,n=1;
	while(div<n)
	{
		if(n%div==0)
		printf("Not Prime");
		else
		div++;
	}
	printf("Prime");
}
