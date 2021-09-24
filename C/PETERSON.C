#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,s,i,w,f,j;
	clrscr();
	printf("Enter range (0 to _) : ");
	scanf("%d",&n);
	printf("The Krishnamurthy/Peterson Numbers are : ");
	for(i=0;i<=n;i++)
	{
		w=i;s=0;f=1;
		while(w!=0)
		{
			d=w%10;
			for(j=1;j<=d;j++)
			f*=j;
			s+=f;
			w/=10;f=1;
		}
		if(s==i)
		printf("\t%d",s);
	}
	getch();
}