#include<stdio.h>
void main()
{
	char s[50];int i;
	printf("Enter text : ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	switch(s[i])
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c\t",s[i]);
	}
}
