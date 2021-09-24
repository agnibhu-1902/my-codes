#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,s=0,w,f=1,i,a=0,b=1,c,d;
	clrscr();
	do
	{
		printf("Enter a number / Enter number of terms : ");
		scanf("%d",&n);
		printf("\n========== MENU ==========\n");
		printf("1.Factorial\n2.Fibonacci\n3.Krishnamurthy\n4.Exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				for(i=1;i<=n;i++)
				f*=i;
				printf("\nFactorial : %d\n",f);
				break;
			case 2:
				printf("\nFibonacci series : %d %d",a,b);
				for(i=1;i<n-1;i++)
				{
					c=a+b;
					printf(" %d",c);
					a=b;b=c;
				}
				printf("\n");
				break;
			case 3:
				w=n;
				while(w!=0)
				{
					d=w%10;
					for(i=1;i<=d;i++)
					f*=i;
					s+=f;
					f=1;w/=10;
				}
				if(s==n)
				printf("\nIt is a Krishnamurthy number\n");
				else
				printf("\nIt is not a Krishnamurthy number\n");
				break;
			case 4:
				printf("\nProgram terminated\n");
				break;
			default:
				printf("\nInvalid choice!\n");
		}
		printf("\n");
	}
	while(ch!=4);
	getch();
}