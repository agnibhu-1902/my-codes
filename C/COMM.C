#include<stdio.h>
#include<conio.h>
int main(int argc,char* argv[])
{
	int i;
	clrscr();
	printf("Your program name is %s",argv[0]);
	if(argc==1)
		printf("\nOnly one argument(program name) present");
	else if(argc>=2)
	{
		printf("\nTotal arguments passed : %d",argc);
		printf("\nYour passed arguments are:");
		for(i=0;i<argc;i++)
			printf("\n%s",argv[i]);
	}
	getch();
	return 0;
}