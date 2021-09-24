#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,b[10],x=0;
	clrscr();
	printf("Enter array range : ");
	scanf("%d",&n);
	if((n>10)||(n<1))
	printf("Out of range!");
	else
	{
		for(i=0;i<n;i++)
		{
			printf("Enter a value : ");
			scanf("%d",&a[i]);
			if(a[i]%2==0)
			b[x++]=a[i];
		}
		printf("Even numbers : ");
		for(i=0;i<x;i++)
		{
			printf("\t%d",b[i]);
		}
	}
	getch();
}