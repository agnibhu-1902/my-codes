#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}
node;
node* get_node(int);
void insert_sorted(node**,int);
void printLL(node*);
void midLL(node*);
int main()
{
	node *start=NULL;
	int ch,item;
	do
	{
		printf("\n1.Insert\n2.Print\n3.Show middle element\n4.Exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the item : ");
				scanf("%d",&item);
				insert_sorted(&start,item);
				break;
			case 2:
				printLL(start);
				break;
			case 3:
				midLL(start);
				break;
			case 4:
				break;
			default:
				printf("\nProvide a valid input!\n");
		}
	}
	while(ch!=4);
	free(start);
	return 0;
}
node* get_node(int item)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->data=item;
	p->prev=NULL;
	p->next=NULL;
	return p;
}
void insert_sorted(node **start,int item)
{
	node *temp,*q,*p;
	if(*start==NULL)
		*start=get_node(item);
	else
	{
		q=NULL;p=*start;
		while(item>p->data)
		{
			q=p;
			p=p->next;
			if(p==NULL)
				break;
		}
		temp=get_node(item);
		if(q==NULL)
		{
			temp->next=*start;
			(*start)->prev=temp;
			*start=temp;
		}
		else if(q!=NULL&&p==NULL)
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
void printLL(node *start)
{
	node *p=start;
	printf("\nThe elements are:\n");
	while(p->next!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
}
void midLL(node *start)
{
	node *p,*q;
	p=start;q=start;
	int c=1;
	while(p!=NULL)
	{
		if(c%2==0)
		{
			q=q->next;
			p=p->next;
		}
		if(p==NULL)
		{
			break;
		}
		c=c+1;
		p=p->next;
	}
	printf("\nMiddle element is %d\n",q->data);
}
