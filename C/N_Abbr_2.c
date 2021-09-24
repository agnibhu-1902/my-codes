#include<stdio.h>
void main()
{
	char ch[30];int i,pos;
	printf("Enter name : ");
	gets(ch);
	for(i;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			if(ch[i+1]==' ')
			continue;
			else
			pos=i;
		}
	}
	printf("Abbreviated name : ");
	for(i=pos+1;ch[i]!='\0';i++)
	printf("%c",ch[i]);
	for(i=0;ch[i]==' ';i++);
	printf(" %c.",ch[i]);
	for(i;i<pos;i++)
	{
		if(ch[i]==' ')
		{
			if(ch[i+1]==' ')
			continue;
			else
			printf("%c.",ch[i+1]);
		}
	}
}
