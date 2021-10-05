#include<stdio.h>
int N=5;
int queue[5];
int front=-1,rear=-1;
void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        rear=front=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if((front+1)%N==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");

    }
    else
    {
    while(i!=rear)
    {
        printf("%d ",queue[i]);
        i=(i+1)%N;
    }
    printf("%d ",queue[i]);
    printf("\n");
    }
}
void main()
{
    enqueue(4);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(12);
    display();
    enqueue(14);
    dequeue();
    enqueue(16);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    dequeue();

}