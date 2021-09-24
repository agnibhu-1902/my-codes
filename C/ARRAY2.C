#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,sum=0;
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
			if(i%2==1)
			sum+=a[i];
		}
		printf("Sum of values in odd index position : %d",sum);
	}
	getch();
}