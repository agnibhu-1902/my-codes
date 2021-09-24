#include<stdio.h>
void main()
{
	int n,d,osum=0,esum=0,counter=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		if(counter%2==1)
		osum+=d;
		else
		esum+=d;
		counter++;n/=10;
	}
	if((osum==esum)||((osum-esum)%11==0))
	printf("Number is divisible by 11");
	else
	printf("Number is not divisible by 11");
}
