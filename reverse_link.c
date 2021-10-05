#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//Function for creating the link list
struct node *creation(struct node *h)
{
    int choice;
    struct node *temp, *newnode;
    printf("enter 1 to enter the number or 0 to exit:\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        while (choice == 1)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter the data:\n ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            if (h == NULL)
            {
                temp = newnode;
                h = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            printf("Press 1 to continue:\n");
            scanf("%d", &choice);
        }
    }
    else
    {
        return h;
    }
    return h;
}
struct node* reverse(struct node *head)
{
    struct node *temp ,*prev=NULL;
    temp=head;
    while (temp!= NULL)
    {
       temp=temp->next;
       head->next=prev;
       prev=head;
       head=temp;
    }
    return prev;
}
//unction to display linked list
struct node *display(struct node *hea)
{
    struct node *temp = hea;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return hea;
}
void main()
{
    struct node *head=NULL;
    head=creation(head);
    head=display(head);
    head=reverse(head);
    head=display(head);
}