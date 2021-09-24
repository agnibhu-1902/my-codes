//Header files
#include<stdio.h>
#include<stdlib.h>
//Structure for node
struct node
{
	int data;
	struct node *prev;
	struct node *next;	
};
//Function prototypes
struct node* get_node(int);
void insert_at_any_pos(struct node**,int,int);
void delete_from_beg(struct node**);
void delete_at_end(struct node**);
void delete_from_any_pos(struct node**,int);
void printDLL(struct node*);
void linear_search(struct node*,int);
int main()
{
	int ch,pos,delpos,item,no;
	struct node *start=NULL;
	do
	{
		printf("\n==== MENU ====\n1.Insert at any position\n2.Delete (from beginning)\n3.Delete (at end)\n4.Delete (at any position)\n5.Display\n6.Linear search\n7.Quit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://For insert
				printf("\nEnter the position where you want to insert : ");
				scanf("%d",&pos);
				printf("Enter the value to be inserted : ");
				scanf("%d",&item);
				insert_at_any_pos(&start,item,pos);
				break;
			case 2://For delete from beginning
				delete_from_beg(&start);
				break;
			case 3://For delete at end
				delete_at_end(&start);
				break;
			case 4://For delete at any position
				if(start==NULL)//When no node is present
				{
					printf("\nLIST IS EMPTY. DELETION NOT POSSIBLE!\n");
					break;
				}
				printf("Enter the position of the node you want to delete : ");
				scanf("%d",&delpos);
				delete_from_any_pos(&start,delpos);
				break;
			case 5://For display
				printDLL(start);
				break;
			case 6://For linear search
				if(start==NULL)//When no node is present
				{
					printf("\nLIST IS EMPTY. SEARCH NOT POSSIBLE!\n");
					break;
				}
				printf("\nEnter the value to search : ");
				scanf("%d",&no);
				linear_search(start,no);
				break;
			case 7://For quit
				printf("\nPROGRAM TERMINATED\n");
				break;
			default:
				printf("\nINVALID CHOICE!\n");
		}
	}
	while(ch!=7);
	free(start);//Free allocated memory
	return 0;
}
struct node* get_node(int item)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));//Dynamically allocate memory
	//Initialize node
	new->data=item;
	new->prev=NULL;
	new->next=NULL;
	return new;
}
void insert_at_any_pos(struct node **start,int item, int pos)
{
	struct node *temp=get_node(item),*p;int i;
	if(pos<=0||(*start==NULL&&pos!=1))//Checking if position is out of range
	{
		printf("\nINVALID POSITION!\n");
		return;
	}
	if(*start==NULL)//For inserting at beginning when no node is present
	{
		*start=temp;
	}
	else if(pos==1)//For inserting at beginning
	{
		temp->next=*start;
		(*start)->prev=temp;
		*start=temp;
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
			printf("\nINVALID POSITION!\n");
			return;
		}
		else if(p->next==NULL)//For inserting at the end
		{
			p->next=temp;
			temp->prev=p;
		}
		else//For inserting in between
		{
			temp->next=p->next;
			(p->next)->prev=temp;
			p->next=temp;
			temp->prev=p;
		}
	}
	printf("\n%d INSERTED SUCCESSFULLY AT POSITION %d!\n",item,pos);
}
void printDLL(struct node *start)
{
	struct node *p=start;
	if(p==NULL)//When no node is allocated memory and start points to null
	{
		printf("\nLIST IS EMPTY!\n");
		return;
	}
	printf("\nElements in the doubly linked list:\n");
	while(p!=NULL)
	{
		//Display the data in the nodes except the last node
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}
void delete_from_beg(struct node **start)
{
	struct node *p;
	if(*start==NULL)		
		printf("\nLIST IS EMPTY. DELETION NOT POSSIBLE!\n");
	else		
	{
		p=*start;
		if(p->next==NULL)		
		{
			*start=NULL;
			printf("\nNODE CONTAINING VALUE %d DELETED FROM THE BEGINNING!\n",p->data);
		}
		else
		{
			*start=(*start)->next;
			(*start)->prev=NULL;
			printf("\nNODE CONTAINING VALUE %d DELETED FROM THE BEGINNING!\n",p->data);
		}
		free(p);
		p=NULL;		
	}
}
void delete_at_end(struct node **start)
{
	struct node *p;
	if(*start==NULL)		
		printf("\nLIST IS EMPTY. DELETION NOT POSSIBLE!\n");
	else		
	{
		p=*start;
		while(p->next!=NULL) 	
		{
			p=p->next;
		}
		if(p==*start)		
		{
			*start=NULL;
			printf("\nNODE CONTAINING VALUE %d DELETED FROM THE END!\n",p->data);
		}
		else			
		{
			(p->prev)->next=NULL;
			printf("\nNODE CONTAINING VALUE %d DELETED FROM THE END!\n",p->data);
		}
		free(p);
		p=NULL;	
	}
}
void delete_from_any_pos(struct node **start,int pos)
{
	struct node *p;int i;
	if(pos<=0)
	{
		printf("\nINVALID POSITION!\n");
		return;
	}
	else if(pos==1)//For first node deletion
	{
		p=*start;
		if(p->next==NULL)
			*start=NULL;
		else
		{
			*start=(*start)->next;
			(*start)->prev=NULL;
		}
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
		if(p==NULL)//When no node is present in the given position
		{
			printf("\nINVALID POSITION!\n");
			return;
		}
		else if(p->next==NULL)//For last node deletion
		{
			(p->prev)->next=NULL;
			free(p);
			p=NULL;
		}
		else//For deletion in between
		{
			(p->prev)->next=p->next;
			(p->next)->prev=p->prev;
			free(p);
			p=NULL;
		}
	}
	printf("\nNODE AT POSITION %d DELETED SUCCESSFULLY!\n",pos);
}
void linear_search(struct node *start,int item)
{
	struct node *p=start;int c=1;
	while(p!=NULL)
	{
		if(p->data==item)//Linearly traversing through each data in the node and checking if found
		{
			printf("\n%d FOUND AT POSITION %d!\n",item,c);
			break;
		}
		p=p->next;c++;
	}
	if(p==NULL)//If value is not found
		printf("\n%d NOT FOUND!\n",item);
}
