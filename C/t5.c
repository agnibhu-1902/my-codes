#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create_list(int a);
struct node
{
	int data;
	struct node *link;
}*FIRST=NULL;
int main()
{
	int ch,a;
	printf("\n----Singly Linked List operation--\n");
	printf("\nPress1 to create list");
	printf("\nPress 2 to display list");
	
	
	
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("\nEnter your value: ");
		         scanf("%d",&a);
		         create_list(a);
		         break;
	}
	return 0;
}

void create_list(int a)
{
	struct node *tmp, *q;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=a;
	tmp->link=NULL;
	if(FIRST==NULL)
		FIRST=tmp;
	else{
		q=FIRST;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=tmp;
	}
}
