//C program for infix to postfix conversion using stack
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
char stack[50];int top=-1;
void push(char x)
{
	if(top==50-1)
	printf("Stack is full\n");
	else
	stack[++top]=x;
}
char pop()
{
	if(top==-1)
	printf("Stack is empty\n");
	else
	return(stack[top--]);
}
void infix_postfix(char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		if(isalpha(x[i]))
		printf("%c",x[i]);
		else if(x[i]==')')
		{
			while(stack[top]!='(')
			printf("%c",pop());
			pop();
		}
		else
		{
			while(isp(stack[top])>=icp(x[i]))
			printf("%c",pop());
			push(x[i]);
		}
		i++;
	}
	while(top>=0)
	printf("%c",pop());
}
int isp(char a)
{
	if(a=='*'||a=='/'||a=='%')
	return(3);
	else if(a=='+'||a=='-')
	return(2);
	else if(a=='(')
	return(1);
	else if(a=='#')
	return(-1);
	else if(a==')')
	return(0);
	else
	return(-1);
}
int icp(char a)
{
	if(a=='*'||a=='/'||a=='%')
	return(3);
	else if(a=='+'||a=='-')
	return(2);
	else if(a=='(')
	return(4);
	else if(a=='#')
	return(-1);
	else if(a==')')
	return(0);
	else
	return(-1);
}
void main()
{
	char infix[50];
	clrscr();
	printf("\nEnter the infix expression : ");
	scanf("%s",infix);
	printf("The postfix is ");
	infix_postfix(infix);
	printf("\n");
	getch();
}