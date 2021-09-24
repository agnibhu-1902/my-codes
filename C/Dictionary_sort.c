#include<stdio.h>
void main()
{
	char a[15][30],temp[30];int i,n,j;
	printf("Enter no. of names to input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name : ");
		fflush(stdin);
		gets(a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("Names in sorted order\n");
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
}
