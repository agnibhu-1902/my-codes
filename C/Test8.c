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
void insert_atafterindex(int d,int index);
void delete_atfirst();
void delete_atend();
void delete_atafterindex(int pos);
int main()
{
    int a,b,c,d,index,ch,pos;
    do
    {
        printf("\n======Single Linked List Operation======\n");
        printf("Press 1 for for creat the list.\n");
        printf("Press 2 for Display the list.\n");
        printf("Press 3 for insert a value at begning..\n");
        printf("Press 4 for insert value at end...\n");
        printf("Press 5 for insert value after index..\n");
        printf("Press 6 for delete value at first..\n");
        printf("Press 7 for delete value at end..\n");
        printf("Press 8 for delete value at any index..\n");
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
        case 5: 
        printf("\nEnter the value which you want to insert after index:");
        scanf("%d",&d);
        printf("Enter the index:");
        scanf("%d",&index);
        insert_atafterindex(d,index);
        break;
        case 6:
        	delete_atfirst();
        	break;
        case 7:
        	delete_atend();
        	break;
        case 8:
        	printf("\nEnter the index which you want to delete:");
        	scanf("%d",&pos);
        	delete_atafterindex(pos);
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
	newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=b;
    newnode->next=NULL;
    if(head==NULL){
    	head=newnode;
    	printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else{
		newnode->next=head;
		head=newnode;
		printf("\nInserted succesfully..");
	}
}
void insert_atend(int c){
	struct node *newnode;
    struct node *q;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=c;
	newnode->next=NULL;
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
	printf("\nInserted Succesfully!!\n");
}
}
void insert_atafterindex(int d,int index){
	struct node *newnode;
	struct node *q;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->next=NULL;
	q=head;
	int count;
	while(q!=NULL){
		q=q->next;
		count++;
	}
	if(head==NULL){
		head=newnode;
		printf("\nMemmory has not created so this value will be inserted at first position..\n");
	}
	else if(index>count){
		printf("\nInvalid index!!\n");
	}
	else{
		q=head;
		int i=0;
		while(i!=index-1){
			q=q->next;
			i++;
		}
	newnode->next=q->next;
	q->next=newnode;
	printf("\nInserted sucessfully!!\n");	
	}
}
void delete_atfirst(){
	struct node *q;
	if(head==NULL){
	printf("\nYour list is Empty so delete is not possible!!!");
	}
	else{
		q=head;
		head=q->next;
		free(q);
		printf("\nDeleted sucessfully!!\n");
	}
}
void delete_atend(){
	struct node *q;
	struct node *prenode;
	if(head==NULL){
	printf("\nYour list is Empty so delete is not possible!!!");
	}
	else{
	q=head;
	while(q->next!=NULL){
		prenode=q;
		q=q->next;
	}
	prenode->next=NULL;
	free(q);
	printf("\nDeleted sucessfully!!!");
}
}
void delete_atafterindex(int pos){
	struct node *q;
	struct node *nextnode;
	q=head;
	int count=1;
	while(q!=NULL){
		q=q->next;
		count++;
	}
	if(head==NULL){
		printf("\nYour list is Empty so delete is not possible!!!");
	}
	else if(pos>count){
		printf("\nInvalid Index!!!");
	}
	else if(pos==1)
	{
		q=head;
		if(head->next==head)
		{
			free(head);
			head=NULL;
		}
		else
		{
			head=head->next;
			free(q);
			q=NULL;
		}
	}
	else{
		int i=1;q=head;
		while(i<pos-1){
			q=q->next;
			i++;
		}
		nextnode=q->next;
		q->next=nextnode->next;
		free(nextnode);
		printf("\nDeleted Sucessfully!!!");
	}
}
