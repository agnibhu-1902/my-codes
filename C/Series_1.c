#include<stdio.h>
void main()
{
	int i,n;float sum=0.0;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=1/(1.0*i);
	}
	printf("Sum : %.2f",sum);
}
