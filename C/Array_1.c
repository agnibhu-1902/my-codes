#include<stdio.h>
void main()
{
	int i,max=0,n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter value : ");
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("\nMax in the array : %d",max);
}
