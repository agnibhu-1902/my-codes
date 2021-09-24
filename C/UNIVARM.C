#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,w,s,d,count,i;
	clrscr();
	printf("Enter range (0 to _) : ");
	scanf("%d",&n);
	printf("The Universal Armstrong Numbers are : ");
	for(i=0;i<=n;i++)
	{
		s=0;count=0;
		w=i;
		while(w!=0)
		{
			count++;
			w/=10;
		}
		w=i;
		while(w!=0)
		{
			d=w%10;
			s+=pow(d,count);
			w/=10;
		}
		if(s==i)
		printf("\t%d",s);
	}
	getch();

}