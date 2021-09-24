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
		s=s*10+d;
		w/=10;
	}
	if(s==n)
	printf("Palindrome number");
	else
	printf("Not a Palindrome number");
}
