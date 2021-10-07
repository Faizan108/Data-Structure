//Doubly linked list creation and operation 
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
//Function for creation of doubly linked list
struct node *create(struct node *head)
{
    int choice;
    struct node *newnode, *temp = head;
    printf("Enter 1 to enter the and 0 to exit\n");
    scanf("%d", &choice);
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the number\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            newnode->prev = head;
            temp = newnode;
            head = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue?\nif yes then press 1\n");
        scanf("%d",&choice);
    }
    return head;
}
//Function for insertion at begining 
struct node* insertion_begining(struct node* head)
{
    struct node* temp=head,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number to insert\n");
    scanf("%d",&newnode->data);
    head->prev=newnode;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
    return head;
}
//Function to display the linked list
struct node* display(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;
}
void main()
{
    int ch;
    struct node *head = NULL;
    head = create(head);
    head=display(head);
    printf("Do you want to inert any number\nif yes then press 1\n");
    scanf("%d",&ch);
    if(ch==1)
    {
    head=insertion_begining(head);    
    head=display(head);
    }
    printf("%d",head->prev);
}