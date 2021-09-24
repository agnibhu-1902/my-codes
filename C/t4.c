#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void creat_list(int a);
void display();
void insert_atfirst(int b);
void insert_atend(int c);
int main()
{
    int a,b,c,ch;
    do
    {
        printf("\n======Single Linked List Operation======\n");
        printf("Press 1 for for creat the list.\n");
        printf("Press 2 for Display the list.\n");
        printf("Press 3 for insert a value at begning..\n");
        printf("Press 4 for insert value at end...\n");
        printf("Press 0 for exit.\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: 
            printf("\nEnter the Value which you want to insert:");
            scanf("%d",&a);
            creat_list(a);
            break;
        case 2:
            printf("\nYour Linked list is:");
            display();
            break;
        case 3:
		       printf("\nEnter the value which you want to insert at Begnning:");
               scanf("%d",&b);
               insert_atfirst(b);
               break;
        case 4: 
               printf("\nEnter the value which you want to insert at End:");
               scanf("%d",&c);
               insert_atend(c);
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
	struct node  *newnode;
	struct node *q;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=a;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=newnode;
	}
}
void display(){
	struct node *q;
	if(head==NULL){
		printf("Empty!!!!");
	}
	else{
		q=head;
		while(q!=NULL){
			printf("%d\t",q->data);
			q=q->next;
		}
	}
}
void insert_atfirst(int b){
	struct node *newnode;
	struct node *q;
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=b;
	newnode->next=head;
	head=newnode;
	printf("\nInserted Succesfully!!!");
}
void insert_atend(int c){
	struct node *newnode;
    struct node *q;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=c;
	newnode->next=NULL;
	q=head;
	if(head==NULL)
		head=newnode;
	while(q->next!=NULL){
		q=q->next;	
	}
	q->next=newnode;
	newnode->next=NULL;
	printf("\nInserted Succesfully!!!");
}
