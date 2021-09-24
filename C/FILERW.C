//File Handling
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("HELLO.TXT","w");
	printf("Write the text and press Enter key : ");
	while((ch=getchar())!='\n')
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("HELLO.TXT","r");
	printf("The content : ");
	while(!feof(fp))
	{
		ch=getc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}