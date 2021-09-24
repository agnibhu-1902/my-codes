#include<stdio.h>
int len(char*);
char* cat(char*,char*);
char* rev(char*);
void cpy(char*,char*);
int cmp(char*,char*);
int cmpi(char*,char*);
int main()
{
	char s[50],d[50],b[50];
	printf("Enter a string : ");
	gets(s);
	printf("Enter another string : ");
	gets(d);
	cpy(b,s);
	printf("\nConcatenated string : %s",cat(s,d));
	cpy(s,b);
	printf("\nOriginal string length : %d",len(s));
	cpy(b,s);
	printf("\nReversed string : %s",rev(s));
	cpy(s,b);
	cpy(b,d);
	cpy(d,s);
	printf("\nCopied string : %s",d);
	cpy(d,b);
	printf("\nDifference between 2 strings : %d",cmp(s,d));
	printf("\nDifference between 2 strings (ignoring case) : %d",cmpi(s,d));
	return 0;
}
int len(char *s)
{
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
		count++;
	return count;
}
char* cat(char *s,char *d)
{
	int i,x=0;
	for(i=0;s[i]!='\0';i++);
	for(i;d[x]!='\0';i++)
	{
		s[i]=d[x];
		x++;
	}
	s[i]='\0';
	return s;
}
char* rev(char *s)
{
	int i,x=0;char q[50];
	for(i=0;s[i]!='\0';i++);
	for(i-=1;i>=0;i--)
		q[x++]=s[i];
	q[x]='\0';
	for(i=0;q[i]!='\0';i++)
		s[i]=q[i];
	return s;
}
void cpy(char *d,char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
		d[i]=s[i];
	d[i]='\0';
	return;
}
int cmp(char *s,char *d)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(((s[i]-d[i])!=0)||(d[i]=='\0'))
			break;
	}
	if(s[i]=='\0'||d[i]=='\0')
		return(len(s)-len(d));
	else
		return(s[i]-d[i]);
}
int cmpi(char *s,char *d)
{
	int i;
	for(i=0;s[i]!='\0';i++)
		s[i]=tolower(s[i]);
	for(i=0;d[i]!='\0';i++)
		d[i]=tolower(d[i]);
	for(i=0;s[i]!='\0';i++)
	{
		if(((s[i]-d[i])!=0)||(d[i]=='\0'))
			break;
	}
	if(s[i]=='\0'||d[i]=='\0')
		return(len(s)-len(d));
	else
		return(s[i]-d[i]);
}
