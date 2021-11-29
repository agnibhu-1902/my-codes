#include<stdio.h>
int main()
{
	int a, b, c;
	do
	{
		printf("==== MENU ====\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Exit\n\nEnter choice : ");
		scanf("%d", &c);
		switch(c)
		{
			case 1:
				printf("\nEnter 2 numbers :\n");
				scanf("%d %d", &a, &b);
				printf("\nResult : %d\n", a + b);
				break;
			case 2:
				printf("\nEnter 2 numbers :\n");
				scanf("%d %d", &a, &b);
				printf("\nResult : %d\n", a - b);
				break;
			case 3:
				printf("\nEnter 2 numbers :\n");
				scanf("%d %d", &a, &b);
				printf("\nResult : %d\n", a * b);
				break;
			case 4:
				printf("\nEnter 2 numbers :\n");
				scanf("%d %d", &a, &b);
				printf("\nResult : %.2f\n", a / (float)b);
				break;
			case 0:
				printf("\nProgram terminating...\n");
				break;
			default:
				printf("\nInvalid choice!\n");
		}
		printf("\n");
	}
	while(c != 0);
	return 0;
}
