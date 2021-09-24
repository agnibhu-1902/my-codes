#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int w=n,d,s1=0,s2=1;
	while(w>0)
	{
		d=w%10;
		s1+=d;
		s2*=d;
		w/=10;
	}
	printf("Sum of digits : %d",s1);
	printf("\nProduct of digits : %d",s2);
	return;
}
