//Krishnamurthy Number
#include<stdio.h>
#include<conio.h>
int isKrishna(int);
int fact(int);
void main()
{
	int n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	if(isKrishna(n))
	printf("Krishnamurthy number");
	else
	printf("Not a Krishnamurthy number");
	getch();
}
int isKrishna(int n)
{
	int w=n,s=0;
	while(w!=0)
	{
		s+=fact(w%10);
		w/=10;
	}
	if(s==n)
	return 1;
	else
	return 0;
}
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	f*=i;
	return f;
}