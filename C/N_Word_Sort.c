#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch[31],tmp[31],temp;int i,j,k,x;
	printf("Enter name : ");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	ch[i]=tolower(ch[i]);
	printf("Sorted name : ");
	i=0;
	while(ch[i]!='\0')
	i++;
	ch[i]=' ';ch[i+1]='\0';
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=' ')
		tmp[x++]=ch[i];
		else
		{
			for(k=0;k<x-1;k++)
			{
				for(j=0;j<x-k-1;j++)
				{
					if(tmp[j]>tmp[j+1])
					{
						temp=tmp[j];
						tmp[j]=tmp[j+1];
						tmp[j+1]=temp;
					}
				}
			}
			for(k=0;k<x;k++)
			printf("%c",tmp[k]);
			printf(" ");
			for(k=0;k<x;k++)
			tmp[k]='\0';
			x=0;
		}
	}
}
