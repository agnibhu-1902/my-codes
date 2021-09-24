#include<stdio.h>
#include<conio.h>
int main(int argc,char* argv[])
{
	int i,k,fact=1,x=1;
	clrscr();
	printf("Your program name is %s",argv[0]);
	if(argc==1)
		printf("\nOnly one argument(program name) present");
	else if(argc>=2)
	{
		for(k=1;k<argc;k++)
		{
			for(i=1;i<=atoi(argv[x]);i++)
				fact*=i;
			printf("\nFactorial of %d is %d",atoi(argv[x]),fact);
			x++;fact=1;
		}
	}
	getch();
	return 0;
}