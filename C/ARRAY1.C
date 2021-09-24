#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],n,i,w;
	clrscr();
	printf("Enter array range : ");
	scanf("%d",&n);
	if((n>10)||(n<1))
	printf("Out of range!");
	else
	{
		w=n-1;
		for(i=0;i<n;i++)
		{
			printf("Enter a value : ");
			scanf("%d",&a[i]);
			b[w--]=a[i];
		}
		printf("Reversed array : ");
		for(i=0;i<n;i++)
		printf("%d\t",b[i]);
	}
	getch();
}
