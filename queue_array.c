#include<stdio.h>
int N=5;
int queue[5];
int front=-1,rear=-1;
// Function to insert element in queue 
void enqueue()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(rear>N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
// Function to delete element from queue
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow\n");
    }
    else if(rear==front)
    {
        rear=front=-1;
    }
    else
    {
        front++;
    }
    
}
//Function tom display queue
void display()
{
    int i;
    for(i=front;i<rear+1;i++)
    {
        printf("%d",queue[i]);
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