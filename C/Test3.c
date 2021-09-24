#include<stdio.h>   
#include<stdlib.h>
 typedef struct Node
{
	int info;
	struct Node *prev;
	struct Node *next;
}
node;
node* Create_Node(int);
void insert_sort(node**,int);
void midLL(node*);
void display(node*);
int main()
{
	node*start=NULL;
	int ch,item;
	do
	{
		printf("\n Press 1. Insertion");
		printf("\n Press 2. Display");
		printf("\n Press 3. Mid value of the sorted linked list");
		printf("\n Press 4. Exit");
		printf("\n enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the node value ");
				scanf("%d",&item);
				insert_sort(&start,item);
				break;
			case 2:
				display(start);
				break;
			case 3:
				midLL(start);
				break;
			case 4:
				break;
			default:
				printf("\n Wrong choice");
				break;
	}
	
}while(ch!=4);
free(start);
return 0;

}
node* Create_Node(int item)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->info=item;
	p->prev=NULL;
	p->next=NULL;
	return p;
}
void insert_sort(node **start,int item)
{
	node *temp,*p,*q;
	temp=Create_Node(item);
	if(*start==NULL)
	{
		*start=temp;
	}
	else
	{
		q=NULL;
		p=*start;
		while(item>p->info)
		{
			q=p;
			p=p->next;
			if(p==NULL)
			break;
		}
		if(q==NULL)
		{
			temp->next=*start;
			(*start)->prev=temp;
			*start=temp;
		}
		else if(q!=NULL &&p==NULL)
		{
			q->next=temp;
			temp->prev=q;
		}
		else
		{
			q->next=temp;
			temp->prev=q;
			temp->next=p;
			p->prev=temp;
		}
			
	}
}
void midLL(node *start)
	{
		node *p,*q;
		int c=1;
		p=start;
		q=start;
		while(p->next!=NULL)
		{
			if(c%2==0)
			{
				q=q->next;
				
			}
			p=p->next;
			c=c+1;
		}
		printf("\n the mid value of the doubly sorted linked list is %d at position %d ",q->info,(c+1)/2);
}
void display(node *start)
{
	node *p;
	p=start;
	printf("\n elements in double linked list");
	while(p!=NULL)
	{
		printf("\n%d",p->info);
		p=p->next;
	}
	//printf("%d\n",p->info);
}
