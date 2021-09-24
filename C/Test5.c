#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int data);
void dequeue();
void display();
int isempty();
int isfull();
int main()
{
    int choice, data;
    do
    {
        printf("\n=====QUEUE OPERATIONS=====\n");
        printf("\n press 1 fpr ENQUEUE:");
        printf("\n press 2 for DEQUEUE:");
        printf("\n press 3 for cheaking queue is full or not:");
        printf("\n press 4 for cheaking queue is empty or not:");
        printf("\n press 5 for display Queue:");
        printf("\npresss 0 for exit:");
        printf("\nenter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value you want to enqueue::");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            if (isfull())
            {
                printf("The queue is full!!");
            }
            else
            {
                printf("The queue is not full!!");
            }
            break;
        case 4:
            if (isempty())
            {
                printf("The queue is empty!!");
            }
            else
            {
                printf("The queue is not empty!!");
            }
            break;
        case 5:
            display();
            break;
        case 0:
            printf("\ntata tata bye bye");
            break;
        default:
            printf("\nInvalid choice!!please try again!!");
        }
    } while (choice != 0);
    return 0;
}
void enqueue(int data)
{
    if (isfull())
    {
        printf("\Enqueue is full!!!");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = data;
        printf("\nyour insertion operaion is succesfull!!!");
    }
}
void dequeue()
{
    int x;
    if (isempty())
    {
        printf("\nQueue is empty!!!");
    }
    else
    {
        x = queue[front];
        front++;
        printf("your deleted element is %d", x);
    }
}
int isfull()
{
    if (rear == MAX - 1)
        return (1);
    else
        return (0);
}
int isempty()
{
    if (front == -1 || front > rear)
        return (1);
    else
        return (0);
}
void display()
{
    int i;
    if (isempty())
    {
        printf("Nothing to display!!!");
    }
    else
    {
		printf("Your enqueue is::");
        for (i = front; i <= rear; i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
