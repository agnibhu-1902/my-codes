//Header files
#include<stdio.h>
#include<stdlib.h>
typedef struct node//Structure for the node
{
	int data;
	struct node *prev;
	struct node *next;
}
node;
//Function prototypes
node* get_node(int);
void insert_sorted(node**,int);
void printDLL(node*);
void midDLL(node*);
int main()
{
	node *start=NULL;int ch,item;
	do
	{
		printf("\n==== MENU ====\n1.Insert\n2.Print\n3.Display middle element\n4.Exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://For inserting into the list
				printf("\nEnter item : ");
				scanf("%d",&item);
				insert_sorted(&start,item);
				break;
			case 2://For displaying the list
				printDLL(start);
				break;
			case 3://For printing the middle element
				midDLL(start);
				break;
			case 4://For exit
				printf("\nProgram terminated\n");
				break;
			default:
				printf("\nINVALID CHOICE!\n");
		}
	}
	while(ch!=4);
	free(start);//Free allocated memory
	return 0;
}
node* get_node(int item)
{
	node *p;
	p=(node*)malloc(sizeof(node));//Dynamically allocate memory for the node
	//Assign values to the node variables
	p->data=item;
	p->prev=NULL;
	p->next=NULL;
	return p;
}
void insert_sorted(node **start,int item)
{
	node *temp,*q,*p;
	if(*start==NULL)//When no node is present
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
		if(q==NULL)//When item to be inserted has value lesser than the start node
		{
			temp->next=*start;
			(*start)->prev=temp;
			*start=temp;
		}
		else if(q!=NULL&&p==NULL)//When item has value greater than the last node
		{
			q->next=temp;
			temp->prev=q;
		}
		else//When item has value greater than a particular node but less than the last node
		{
			q->next=temp;
			temp->prev=q;
			temp->next=p;
			p->prev=temp;
		}
	}
}
void printDLL(node *start)
{
	node *p=start;
	if(p==NULL)//When no node is allocated memory and start points to null
	{
		printf("\nLIST IS EMPTY!\n");
		return;
	}
	printf("\nElements in the doubly linked list:\n");
	while(p->next!=NULL)
	{
		//Display the data in the nodes except the last node
		printf("%d\n",p->data);
		p=p->next;
	}
	//Display the data in the last node
	printf("%d\n",p->data);
}
void midDLL(node *start)
{
	node *p,*q;p=q=start;
	int c=1;
	if(p==NULL)//When no node is allocated memory and start points to null
	{
		printf("\nLIST IS EMPTY!\n");
		return;
	}
	//Algorithm to find the middle element in the linked list
	while(p->next!=NULL)
	{
		if(c%2==0)
			q=q->next;
		p=p->next;c++;
	}
	printf("\nMiddle element is %d at position %d\n",q->data,(c+1)/2);
}
