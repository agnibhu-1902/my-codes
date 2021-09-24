#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;	
};
struct node* create_node(int);
void insert(struct node**,int,int);
void delete(struct node**,int);
void printDLL(struct node*);
void linear_search(struct node*,int);
int goto;
int main()
{
	int ch,pos,pos1,item,num;
	struct node *start=NULL;
	do
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Linear search\n5.Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter position : ");
				scanf("%d",&pos);
				printf("\nEnter value : ");
				scanf("%d",&item);
				insert(&start,item,pos);
				break;
			case 2:
				printf("Enter position of node to delete : ");
				scanf("%d",&pos1);
				delete(&start,pos1);
				break;
			case 3:
				printDLL(start);
				break;
			case 4:
				printf("\nEnter the value to search : ");
				scanf("%d",&num);
				linear_search(start,num);
				break;
			case 5:
				printf("\nProgram Ended\n");
				break;
			default:
				printf("\nENTER VALID CHOICE!\n");
		}
	}
	while(ch!=5);
	free(start);
	return 0;
}
struct node* create_node(int item)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	new->prev=NULL;
	new->next=NULL;
	return new;
}
void insert(struct node **start,int item, int pos)
{
	struct node *tmp=create_node(item),*p;int i;
	if(pos<=0||(*start==NULL&&pos!=1))
	{
		printf("\nPOSITION NOT VALID\n");
		return;
	}
	if(*start==NULL)
	{
		*start=tmp;
	}
	else if(pos==1)
	{
		tmp->next=*start;
		(*start)->prev=tmp;
		*start=tmp;
	}
	else
	{
		p=*start;
		for(i=1;i<pos-1;i++)
		{
			if(p!=NULL)
				p=p->next;
			else
				break;
		}
		if(p==NULL)
		{
			printf("\nPOSITION NOT VALID\n");
			return;
		}
		else if(p->next==NULL)
		{
			p->next=tmp;
			tmp->prev=p;
		}
		else
		{
			tmp->next=p->next;
			(p->next)->prev=tmp;
			p->next=tmp;
			tmp->prev=p;
		}
	}
	printf("\nINSERTION SUCCESSFUL (%d  AT POSITION %d)!\n",item,pos);
}
void delete(struct node **start,int pos)
{
	struct node *p,*tmp;int i;
	if(pos<=0)
	{
		printf("\nPOSITION NOT VALID\n");
		return;
	}
	else if(*start==NULL)
	{
		printf("\nNO ELEMENT PRESENT\n");
		return;
	}
	else if(pos==1)
	{
		p=*start;
		tmp=(*start)->next;
		*start=tmp;
		free(p);
		p=NULL;
	}
	else
	{
		p=*start;
		for(i=1;i<pos;i++)
		{
			if(p!=NULL)
				p=p->next;
			else
				break;
		}
		if(p==NULL)
		{
			printf("\nPOSITION NOT VALID!\n");
			return;
		}
		else if(p->next==NULL)
		{
			(p->prev)->next=NULL;
			free(p);
			p=NULL;
		}
		else
		{
			(p->prev)->next=p->next;
			(p->next)->prev=p->prev;
			free(p);
			p=NULL;
		}
	}
	printf("\nDELETED NODE AT %dth POSITION!\n",pos);
}
void printDLL(struct node *start)
{
	struct node *p=start;
	if(p==NULL)
	{
		printf("\nNO ELEMENT PRESENT\n");
		return;
	}
	printf("\nElements in the doubly linked list:\n");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
void linear_search(struct node *start,int item)
{
	struct node *p=start;int c=1;
	while(p!=NULL)
	{
		if(p->data==item)
		{
			printf("\nELEMENT %d FOUND AT POSITION %d!\n",item,c);
			break;
		}
		p=p->next;c++;
	}
	if(p==NULL)
		printf("\nELEMENT %d NOT FOUND!\n",item);
}
