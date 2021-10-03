//Circular Doubly Linked List
//Header files
#include<stdio.h>
#include<stdlib.h>
//Structure for node
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}
node;
//Function prototypes
node* get_node(int);
void insert_at_beg(node**,int);
void insert_at_end(node**,int);
void delete_from_beg(node**);
void delete_from_end(node**);
void display(node*);
int main()
{
	node *start=NULL;int ch,no;
	printf("\nCIRCULAR DOUBLY LINKED LIST\n");
	do
	{
		printf("\n==== MENU ====\n1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Display\n6.Exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://For insert at beginning
				printf("\nEnter value to be inserted : ");
				scanf("%d",&no);
				insert_at_beg(&start,no);
				break;
			case 2://For insert at end
				printf("\nEnter value to be inserted : ");
				scanf("%d",&no);
				insert_at_end(&start,no);
				break;
			case 3://For delete from beginning
				delete_from_beg(&start);
				break;
			case 4://For delete from end
				delete_from_end(&start);
				break;
			case 5://For display
				display(start);
				break;
			case 6://For exit
				printf("\nPROGRAM TERMINATED\n");
				break;
			default:
				printf("\nINVALID CHOICE!\n");
		}
	}
	while(ch!=6);
	free(start);//Free allocated memory
	return 0;
}
node* get_node(int item)
{
	node *tmp=(node*)malloc(sizeof(node));//Dynamically allocate memory
	//Initialize node
	tmp->data=item;
	tmp->next=NULL;
	tmp->prev=NULL;
	return tmp;
}
void insert_at_beg(node **start,int item)
{
	node *temp=get_node(item);
	if(*start==NULL)//For inserting at beginning when no node is present
	{
		*start=temp;
		(*start)->next=*start;
		(*start)->prev=*start;
	}
	else if((*start)->next==*start)//For inserting at beginning when only one node is present
	{
		temp->next=*start;
		(*start)->prev=temp;
		temp->prev=*start;
		(*start)->next=temp;
		(*start)=temp;
	}
	else//For inserting at beginning
	{
		temp->next=*start;
		temp->prev=(*start)->prev;
		((*start)->prev)->next=temp;
		(*start)->prev=temp;
		*start=temp;
	}
	printf("\nVALUE %d INSERTED AT THE BEGINNING!\n",item);
}
void insert_at_end(node **start,int item)
{
	node *temp=get_node(item),*p;
	if(*start==NULL)//For inserting at end when no node is present
	{
		*start=temp;
		(*start)->next=*start;
		(*start)->prev=*start;
	}
	else if((*start)->next==*start)//For inserting at end when only one node is present
	{
		(*start)->next=temp;
		temp->prev=*start;
		(*start)->prev=temp;
		temp->next=*start;
	}
	else//For inserting at end
	{
		p=*start;
		while(p->next!=*start)
			p=p->next;
		temp->prev=p;
		temp->next=p->next;
		(p->next)->prev=temp;
		p->next=temp;
	}
	printf("\nVALUE %d INSERTED AT THE END!\n",item);
}
void delete_from_beg(node **start)
{
	node *p;
	if(*start==NULL)//When no node is allocated memory and start points to null
		printf("\nLIST IS EMPTY. DELETION NOT POSSIBLE!\n");
	else
	{
		p=*start;
		if(p->next==*start)//Deleting the node when only one node is present
			*start=NULL;
		else//Deleting the first node
		{
			(p->prev)->next=p->next;
			(p->next)->prev=p->prev;
			*start=(*start)->next;
		}
		printf("\nVALUE %d DELETED FROM THE BEGINNING!\n",p->data);
		free(p);
		p=NULL;
	}
}
void delete_from_end(node **start)
{
	node *p;
	if(*start==NULL)//When no node is allocated memory and start points to null
		printf("\nLIST IS EMPTY. DELETION NOT POSSIBLE!\n");
	else
	{
		p=*start;
		while(p->next!=*start)
			p=p->next;
		if(p==*start)//Deleting the node when only one node is present
			*start=NULL;
		else//Deleting the last node
		{
			(p->next)->prev=p->prev;
			(p->prev)->next=p->next;
		}
		printf("\nVALUE %d DELETED FROM THE END!\n",p->data);
		free(p);
		p=NULL;
	}
}
void display(node *start)
{
	node *p;
	if(start==NULL)//When no node is allocated memory and start points to null
		printf("\nLIST IS EMPTY!\n");
	else
	{
		p=start;
		printf("\nElements in the circular doubly linked list:\n");
		while(p->next!=start)
		{
			printf("%d\t",p->data);//Display the data in the nodes except the last node
			p=p->next;
		}
		printf("%d\n",p->data);//Display the data in the last node
	}
}
