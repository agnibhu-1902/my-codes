#include<stdio.h>
#include<conio.h>
void push(int);
void pop(void);
void display(void);
void overflow(void);
void underflow(void);
int stack[10];int top=-1;
void main()
{
	int a,ch;
	clrscr();
	do
	{
		printf("\n\n=====STACK OPERATIONS=====");
		printf("\nPress 1 for push operation");
		printf("\nPress 2 for pop operation");
		printf("\nPress 3 for displaying the stack");
		printf("\nPress 4 for checking overflow condition");
		printf("\nPress 5 for checking underflow condition");
		printf("\nPress 0 for exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number to push:");
				scanf("%d",&a);
				push(a);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				overflow();
				break;
			case 5:
				underflow();
				break;
			case 0:
				printf("\nProgram terminated");
				break;
			default:
				printf("Invalid choice!");
		}
	}
	while(ch!=0);
}
void push(int data)
{
	if(top==10)
	printf("\nStack is full!");
	else
	{
		stack[++top]=data;
		printf("\nPush operation successful");
	}
}
void pop()
{
	int x;
	if(top==-1)
	printf("\nStack is empty!");
	else
	{
		printf("\nPop operation successful!");
		x=stack[top--];
		stack[top+1]=0;
	}
}
void display()
{
	int i;
	if(top==-1)
	printf("\nStack is empty");
	else
	{
		for(i=0;i<=top;i++)
		printf("\n%d",stack[i]);
	}
}
void overflow()
{
	if(top==10-1)
	printf("\nYes");
	else
	printf("\nNo");
}
void underflow()
{
	if(top==-1)
	printf("\nYes");
	else
	printf("\nNo");
}