#include<stdio.h>
int main()
{
	int n,a,b,c,i,count=0;
	printf("n? ");
	scanf("%d",&n);
	printf("a? ");
	scanf("%d",&a);
	printf("b? ");
	scanf("%d",&b);
	printf("c? ");
	scanf("%d",&c);
	for(i=1;;i++)
	{
		if(i%a==0||i%b==0||i%c==0)
			count++;
		if(count==n)
			break;
	}
	printf("\nUgly number : %d",i);
}
