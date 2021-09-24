//Armstrong number checking
#include<stdio.h>
#include<conio.h>
#include<math.h>
int isArmstrong(int);
int pwr(int,int);
void main()
{
	int n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	if(isArmstrong(n))
	printf("Armstrong number");
	else
	printf("Not an Armstrong number");
	getch();
}
int isArmstrong(int n)
{
	int w=n,s=0,count=0;
	while(w!=0)
	{
		count++;w/=10;
	}
	w=n;
	while(w!=0)
	{
		s+=pwr((w%10),count);
		w/=10;
	}
	if(s==n)
	return (1);
	else
	return (0);
}
int pwr(int d,int c)
{
	return (pow(d,c));
}