#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the values of a & b : ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swapping\na : %d\nb : %d",a,b);
}
swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
