#include<stdio.h>
int N=5;
int dequeue[5];
int front=-1,rear=-1;
void enqueue_front(int x)
{
    if(front==(rear+1)%N)
    {
        printf("Queue if full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        dequeue[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        dequeue[front]=x;
    }
    else
    {
        front--;
        dequeue[front]=x;
    }
}
void enqueue_rear(int x)
{
    if(front==(rear+1)%N)
    {
        printf("Queue is full\n");
    }
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        dequeue[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        dequeue[rear]=x;
    }
    else
    {
        rear++;
        dequeue[rear]=x;
    }
}
void dequeue_front()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(rear==front)
    {
        printf("%d\n",dequeue[front]);
        rear=front=-1;
    }
    else if(front==N-1)
    {
        printf("%d\n",dequeue[front]);
        front=0;
    }
    else
    {
        printf("%d\n",dequeue[front]);
        front++;
    }
}
void dequeue_rear()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is empty\n");
    }
    else if(rear==0)
    {
        printf("%d\n",dequeue[rear]);
        rear=N-1;
    }
    else if(rear==front)
    {
        printf("%d\n",dequeue[rear]);
        rear=front=-1;
    }
    else
    {
        printf("%d\n",dequeue[rear]);
        rear--;
    }
}
void display()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d ",dequeue[i]);
        i=(i+1)%N;
    }
    printf("%d\n",dequeue[i]);
}
void main()
{
    int choice=0,ch,x;
    printf("Enter 1 to enter the pogram\n");
    scanf("%d",&choice);
    while(choice==1)
    {
        printf("Enter 1 to enqueue_front\tEnter 2 to enqueue_rear\tEnter 3 to dequeue_front\tEnter 4 to dequeue_rear\tEnter 5 to display\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter number to insert\n");
            scanf("%d",&x);
            enqueue_front(x);
            break;
        case 2:printf("Enter number to insert\n");
            scanf("%d",&x);
            enqueue_rear(x);
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            dequeue_rear();
            break;
        case 5:
            display();
            break;
        default:
            break;
        }
        printf("Enter 1 to continue\n");
        scanf("%d",&choice);
    }
}