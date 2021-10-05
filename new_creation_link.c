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
//Function for Insertion in begining
struct node *insertbeg(struct node *head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the number to insert:\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}
//Function for insertion at last
struct node *insertlast(struct node *head)
{
    struct node *newnode, *temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the number to insert:\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
//Function for insertion after certain element
struct node *insertafter(struct node *head)
{
    int num;
    struct node *newnode, *temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the number to insert:\n");
    scanf("%d", &newnode->data);
    printf("Enter the number after which you have to insert the number:\n");
    scanf("%d", &num);
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
        temp = temp->next;
    }
    return head;
}
// Function for deleting the element from begining
struct node *delete_begining(struct node *head)
{
    head = head->next;
    return head;
}
//Function for deleting the element from last
struct node *delete_last(struct node *head)
{
    struct node *temp = head, *pre;
    while (temp != NULL)
    {
        pre = temp->next;
        if (pre->next == NULL)
        {
            break;
        }
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
// Function for Deleting the element in between
struct node* delete_between(struct node* head)
{
    int num;
    struct node*temp=head,*prev;
    printf("Enter the number to delete\n");
    scanf("%d",&num);
    while(temp->next!=NULL)
    {
        prev=temp->next;
        if(prev->data==num)
        {
            temp->next=prev->next;
        }
        temp=temp->next;
    }
    return head;
}
// Funtion to diplay the linked list 
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
    int choice, ch, c, choi;
    struct node *head = NULL;
    head = creation(head);
    if (head != NULL)
    {
        printf("  YOUR LIST  \n");
        head = display(head);
        printf("Want to insert a number?\nif yes enter 1:\n"); //choice for inserting element
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Where you want to insert the data:\n");
            printf("Enter 1 for insertion  at begining\nEnter 2 for insertion at last\nEnter 3 for insertion after the element\n");
            scanf("%d", &ch); // choice for inserting a element at certain position
            switch (ch)
            {
            case 1:
                head = insertbeg(head);
                break;
            case 2:
                head = insertlast(head);
                break;
            case 3:
                head = insertafter(head);
                break;
            default:
                break;
            }
        }
        else
        {
            printf("Don't want to inert , OK then\n");
        }
        printf("   YOUR LIST  \n");
        head = display(head);
        printf("Do you want to delete some element\nif yes press 1\n");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Enter 1 to delete element from begining\nEnter 2 to delete element from last\nEnter 3 to delete element from between\n");
            scanf("%d", &choi);
            switch (choi)
            {
            case 1:
                head = delete_begining(head);
                break;
            case 2:
                head = delete_last(head);
                break;
            case 3:
                head=delete_between(head);
                break;
            default:
                break;
            }
        }
        else
        {
            printf("Don't want to delete , OK then\n");
        }
        printf("  YOUR LIST  \n");
        head = display(head);
    }
    else
    {
        printf("   *JAB KUCH KARNA HI NHI THA TO PROGRAM KYO RUN KIYA MENTAL*  :)   ");
    }
}