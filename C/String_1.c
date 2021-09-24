#include<stdio.h>
void main()
{
	int i,j,n,flag=0;char ch[50];
	printf("Enter string : ");
	gets(ch);
	n=strlen(ch);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(ch[i]!=ch[j])
		{
			flag=1;break;
		}
	}
	if(flag==0)
	printf("Palindrome");
	else
	printf("Not palindrome");
}
