//Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,y=10,t,*a=&x,*b=&y;
	clrscr();
	t=*a;*a=*b;*b=t;
	printf("%d, %d",x,y);
	getch();
}