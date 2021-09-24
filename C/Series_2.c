#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,x,ctr=2,c=-1;float sum=1.0;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the value of x : ");
	scanf("%d",&x);
	for(i=1;i<n;i++)
	{
		sum+=c*pow(x,ctr)/(1.0*fact(ctr));
		c*=-1;ctr+=2;
	}
	printf("Sum : %.2f",sum);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return(f);
}
