#include<stdio.h>
void sort(char*,int);
int main()
{
	int size,i;char a[50];
	do
	{
		printf("Enter range of array : ");
		scanf("%d",&size);
	}
	while(size<=0);
	printf("Enter elements:\n");
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		scanf("%c",&a[i]);
	}
	sort(a,size);
}
void sort(char a[],int size)
{
	int i,j;char temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<size;i++)
	printf("%c\n",a[i]);
}
