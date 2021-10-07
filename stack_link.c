#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};
struct node *top = NULL;
void push(int n)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->ptr = top;
    top = newnode;
}
void pop()
{
    top = top->ptr;
}
void display()
{
    struct node *temp = top;
    while (top != NULL)
    {
        printf("%d", top->data);
        top = top->ptr;
    }
}
void main()
{
    int choice = 1, ch;
    while (choice == 1)
    {
        printf("Enter 1 to push\nEnter 2 for pop\nEnter 3 for display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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