#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head = NULL;
void creat_list(int a);
void display();
void insert_atfirst(int b);
void insert_atend(int c);
void insert_atanyindex(int d, int index);
void insert_afternode(int position,int no);
int main()
{
    int ch,a,b,c,d,index,position,no;
    do
    {
        printf("\n===Doubly Linked List Operation===\n");
        printf("Press 1 for creat a double linked list..\n");
        printf("Press 2 for Display item..\n");
        printf("Press 3 for insert value at beginning..\n");
        printf("Press 4 for insert value at End..\n");
        printf("Press 5 for insert value at any index..\n");
        printf("Press 6 for insert value after a node..\n");
        printf("Press 0 for Exit..\n");
        printf("Enter tour choice..");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value which you want to insert:");
            scanf("%d", &a);
            creat_list(a);
            break;
        case 2:
            display();
            break;
        case 3:
        	printf("Enter the value which you want to insert at beginning:");
        	scanf("%d",&b);
        	insert_atfirst(b);
        	break;
        case 4:
		    printf("Enter the value which you want to insert at end:");
			scanf("%d",&c);
			insert_atend(c);
			break;
		case 5:
			printf("Enter the value which you want to insert at any index:");
			scanf("%d",&d);
			printf("Enter the index:");
			scanf("%d",&index);
			insert_atanyindex(d,index);
			break;
		case 6:
			printf("\nAfter Which value?");
			scanf("%d",&position);
			printf("Enter the value which you want to insert after the position value:");
			scanf("%d",&no);
			insert_afternode(position,no);
			break;	
        case 0:
            printf("\nThanks for using my program..");
            break;
        default:
            printf("\nInvalid choice!!Please try again..");
        }
    } while (ch != 0);

    return 0;
}
void creat_list(int a){
    struct node *newnode,*q;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=a;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
}
else{
    q=head;
    while(q->next!=NULL){
    q=q->next;
    }
    q->next=newnode;
    newnode->prev=q;
}
}
void display()
{
	struct node *q;
	if(head==NULL){
		printf("Empty!!!!");
	}
	else{
		q=head;
		printf("\nYour List is:");
		while(q!=NULL){
			printf("%d\t",q->data);
			q=q->next;
		}
	}
}
void insert_atfirst(int b){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=b;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
    	head=newnode;
    	printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
		printf("\nInserted succesfully..\n");
	}
}
void insert_atend(int c){
	struct node *newnode,*q;
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=c;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
    	head=newnode;
    	printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=newnode;
		newnode->prev=q;
		printf("\nInserted Succesfully!!\n");
	}
}
void insert_atanyindex(int d, int index){
	struct node *newnode,*q,*nextnode;
	int count;
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    newnode->prev=NULL;
    q=head;
    while(q!=NULL){
    	q=q->next;
    	count++;
	}
	if(head==NULL){
		head=newnode;
		printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else if(index==1){
		insert_atfirst(d);
	}
	else if(index>count){
		printf("\nInvalid Index!!\n");
	}
	else{
		q=head;
		int i=1;
		while(i!=index-1){
			q=q->next;
			i++;
		}
		nextnode=q->next;
		q=nextnode->prev;
		newnode->next=nextnode;
		nextnode->prev=newnode;
		q->next=newnode;
		q=newnode->prev;
		printf("\nInserted Succesfully!!\n");
	}
}
void insert_afternode(int position,int no){
	struct node *newnode,*q,*nextnode;
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=no;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
    	head=newnode;
    	printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else{
		q=head;
		while(q->next!=NULL){
			if(q->data==position){
			newnode->next=q->next;
			(q->next)->prev=newnode;
			q->next=newnode;
			newnode->prev=q;break;
			}
			q=q->next;}
			if(q->next==NULL)
			{
				q->next=newnode;
				newnode->prev=q;
			}
		printf("\nInserted sucessfully!!\n");
	}
	
}
