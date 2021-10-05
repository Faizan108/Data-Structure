#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int x)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty\n");
    }
    else if(rear==front)
    {
        rear=front=NULL;
    }
    else
    {        
        front=front->next;
        rear->next=front;
    }
}
void display()
{
    struct node* temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
    while(temp->next!=front)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
    }
}
void main()
{
    enqueue(5);
    enqueue(9);
    enqueue(10);
    display();
    dequeue();
    dequeue();
    display();
    dequeue();
    display();
}