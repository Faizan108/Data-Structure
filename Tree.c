#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create()
{
    struct node* newnode;
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a node and (-1) for no node\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter the left child %d\n",x);
    newnode->left=create();
    printf("Enter the right child %d\n",x);
    newnode->right=create();
    return newnode;
}
void prorder(struct node* root)
{
    if(root==0)
    {
        return;
    }
    printf("%d ",root->data);
    prorder(root->left);
    prorder(root->right);
}
void inorder(struct node * root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node* root)
{
    if(root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void main()
{
    struct node* root;
    root=create();
    printf("\nPreorder :\n");
    prorder(root);
    printf("\nInorder :\n");
    inorder(root);
    printf("\nPostorder :\n");
    postorder(root);
}