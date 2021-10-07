#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void traverse(struct node* h)
{
    while(h!=NULL)
    {
        printf("%d",h->data);
        h=h->next;
    }
}
void main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    //Allocate memory in heap memory
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    //Link first node with second
    head->data=7;
    head->next=second;
    //link second node with third
    second->data=9;
    second->next=third;
    //now end the list
    third->data=5;
    third->next=NULL;
    traverse(head);
}
