#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int x)
{
    struct node* t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->left=NULL;
    t->right=NULL;
    return t;
}
struct node* insert(struct node* root,int x)
{
    if(root==NULL)
    {
        return newnode(x);
    }
    if(x>root->data)
    {
        root->right=insert(root->right,x);
    }
    else if(x<root->data)
    {
        root->left=insert(root->left,x);
    }
    return root;
    
}
void inorder(struct node* root)
{
    if(root=NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void main()
{
    struct node* root=NULL;
    root=newnode(20);
    insert(root,15);
    insert(root,25);
    insert(root,21);
    insert(root,16);
    inorder(root);

}