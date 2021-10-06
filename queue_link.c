#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        front=front->next;
    }
}
void display()
{
    struct node *temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
     int choice = 1, ch;
    while (choice == 1)
    {
        printf("Enter 1 to enqueue\nEnter 2 for dequeue\nEnter 3 for display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
        printf("Want to continue ,then press 1\n");
        scanf("%d", &choice);
    }
}