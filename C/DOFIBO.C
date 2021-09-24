#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,c,i=1;
	clrscr();
	printf("Enter number of terms : ");
	scanf("%d",&n);
	printf("Fibonacci numbers : \t%d\t%d",a,b);
	do
	{
		c=a+b;
		printf("\t%d",c);
		a=b;b=c;
		i++;
	}
	while(i<n-1);
	getch();
}