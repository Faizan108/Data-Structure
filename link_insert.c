#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* insert(struct node* h, int num )
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=h;
    ptr->data=num;
    return ptr;

    
    
}
void display(struct node* hea)
{
    while (hea!=NULL)
    {
        printf("%d",hea->data);
        hea=hea->next;
        /* code */
    }
    
}
void main()
{
    int n;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    //Allocating memory for elements
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    //Entering elements in link list
    head->data=7;
    head->next=second;
    //
    second->data=6;
    second->next=third;
    //
    third->data=3;
    third->next=fourth;
    //
    fourth->data=5;
    fourth->next=NULL;
    printf("enter the element to be insert\n");
    scanf("%d",&n);
    head=insert(head,n);
    display(head);
}