#include<stdio.h>
void print_prime(int);
int main()
{
	int i,no;
	do
	{
		printf("Enter range : ");
		scanf("%d",&no);
	}
	while(no<=2);
	for(i=2;i<=no;i++)
	{
		print_prime(i);
	}
}
void print_prime(int n)
{
	int c=0,i;
	for(i=1;i<=n;i++)
	if(n%i==0)
	c++;
	if(c==2)
	printf("%d\n",n);
}
