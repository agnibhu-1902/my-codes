#include<stdio.h>
void main()
{
	char ch[30];int i,pos;
	printf("Enter name : ");
	gets(ch);
	for(i=0;ch[i]==' ';i++);
	printf("Abbreviated name : %c",ch[i]);
	for(i;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			if(ch[i+1]==' ')
			continue;
			else
			{
				printf(".%c",ch[i+1]);
				pos=i;
			}
		}
	}
	for(i=pos+2;ch[i]!='\0';i++)
	printf("%c",ch[i]);
}
