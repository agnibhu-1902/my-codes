#include<stdio.h>
void main()
{
	int y,m,d;
	printf("Enter no. of days : ");
	scanf("%d",&d);
	y=d/365;
	d%=365;
	m=d/12;
	d%=12;
	printf("Years : %d\tMonths : %d\tDays : %d",y,m,d);
}
