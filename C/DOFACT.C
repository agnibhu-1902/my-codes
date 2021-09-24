#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,fact=1;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	do
	{
		fact*=i;
		i++;
	}
	while(i<=n);
	printf("The factorial of the number : %d",fact);
	getch();
}