#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,c;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);//Input
	printf("Prime factors : ");
	for(i=1;i<n;i++)
	{
		c=0;
		if(n%i==0)//Factor checking
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				c++;
			}
			if(c==2)//Prime checking
			printf("%d\t",i);
		}
	}
	getch();
}