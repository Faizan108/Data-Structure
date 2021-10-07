#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int exp;
    struct node* ptr;
};
struct node* create(struct node* head)
{
    struct node * newnode,*temp;
    int ch;
    printf("Enter 1 to enter values\n");
    scanf("%d",&ch);
    while(ch==1)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the coeff\n");
    scanf("%d",&newnode->data);
    printf("Enter the exponential value\n");
    scanf("%d",&newnode->exp);
    newnode->ptr=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->ptr=newnode;
        temp=newnode;
    }
    printf("Enter 1 to continue\n");
    scanf("%d",&ch);
    }
    return (head);
}
struct node* Display(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("da=%d ex=%d",temp->data,temp->exp);
        temp=temp->ptr;
    }
    printf("\n");
    return head;
}
void main()
{
    struct node* head=NULL,*head1=NULL;
    head=create(head);
    head1=create(head1);
    head=Display(head);
    head1=Display(head1);
}