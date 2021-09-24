//C program  for vowel counting
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f;char ch;int count=0;
	clrscr();
	printf("Enter your message(s):[Press Ctrl+Z to exit]\n");
	f=fopen("Sample.txt","w");
	while((ch=getchar())!=EOF)
		putc(ch,f);
	fclose(f);
	f=fopen("Sample.txt","r");
	while((ch=getc(f))!=EOF)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			count++;
	}
	printf("Number of vowels : %d",count);
	fclose(f);
	getch();
	return 0;
}
