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
int main()
{
    int ch, a;
    do
    {
        printf("\n===Doubly Linked List Operation===\n");
        printf("Press 1 for creat a double linked list..\n");
        printf("Press 2 for Display item..\n");
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
		while(q!=NULL){
			printf("%d\t",q->data);
			q=q->next;
		}
	}
}
