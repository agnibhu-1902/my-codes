#include<stdio.h>
void main()
{
	int i,psum=0,nsum=0,n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter value : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		psum+=a[i];
		else
		nsum+=a[i];
	}
	printf("Sum of positive numbers : %d",psum);
	printf("\nSum of negative numbers : %d",nsum);
}
