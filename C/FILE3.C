//C program for file manipulation
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f,*copy;int ch,count=0;
	clrscr();
	f=fopen("Main.txt","w");
	printf("Enter the text [Type Ctrl+Z to exit]:\n");
	while((ch=getchar())!=EOF)
		putc(ch,f);
	fclose(f);
	f=fopen("Main.txt","r");
	copy=fopen("Copy.txt","w");
	printf("\n");
	while((ch=getc(f))!=EOF)
		putc(ch,copy);
	fclose(f);fclose(copy);
	copy=fopen("Copy.txt","r");
	while((ch=getc(copy))!=EOF)
		printf("Position of character \'%c\' is %d\n",ch,++count);
	printf("Total number of charcters : %d\n",count);
	fclose(copy);
	f=fopen("Main.txt","a+");
	fputs("Ending of file",f);
	rewind(f);
	printf("\n");
	while((ch=getc(f))!=EOF)
		printf("%c",ch);
	fclose(f);
	getch();
	return 0;
}
