//C program  for storing even and odd digits in separate files
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f,*odd,*even;int n,i,val;
	clrscr();
	f=fopen("Integer.txt","w");
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		putw(val,f);
	}
	fclose(f);
	f=fopen("Integer.txt","r");
	odd=fopen("Odd.txt","w");
	even=fopen("Even.txt","w");
	printf("\n");
	while((val=getw(f))!=EOF)
	{
		if(val%2==0)
			putw(val,even);
		else
			putw(val,odd);
	}
	fclose(f);fclose(odd);fclose(even);
	odd=fopen("Odd.txt","r");
	even=fopen("Even.txt","r");
	while((val=getw(odd))!=EOF)
		printf("%d",val);
	printf("\n");
	while((val=getw(even))!=EOF)
		printf("%d",val);
	fclose(odd);fclose(even);
	getch();
	return 0;
}
