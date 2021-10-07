#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* delete_link(struct node* h,struct node*num)
{
    struct node* p=h;
    while(p!=NULL)
    {
        if(p->next==num)
        {
            p->next=num->next;
        }
        p=p->next;
    }
    return h;
}
struct node* display(struct node* hea)
{
    struct node* pe=hea;
    while (pe!=NULL)
    {
        printf("%d ",pe->data);
        pe=pe->next;
        /* code */
    }
    printf("\n");
    return hea;
    
}
void main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=2;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    head=display(head);
    head=delete_link(head,third);
    display(head);


}