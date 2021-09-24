#include<stdio.h>
void main()
{
	int ch;float n;
	printf("Menu : \n1.Celsius\n2.Fahrenheit\nEnter choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter temperature in Celsius : ");
				scanf("%f",&n);
				printf("Equivalent temperature in Fahrenheit : %.2f",(9/5.0*n+32));
				break;
		case 2: printf("Enter temperature in Fahrenheit : ");
				scanf("%f",&n);
				printf("Equivalent temperature in Celsius : %.2f",(5/9.0*(n-32)));
				break;
		default: printf("Invalid choice");
	}
}
