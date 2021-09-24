#include<stdio.h>
void main()
{
	int w,n,d,s=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	w=n;
	while(w!=0)
	{
		d=w%10;
		s=s+d*d*d;
		w/=10;
	}
	if(s==n)
	printf("Armstrong number");
	else
	printf("Not an Armstrong number");
}
