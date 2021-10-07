#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node* left;
    struct node* right;
};
struct node* insert(char c[],int n)
{
    struct node* tree=NULL;
    if(c[n]!='\0')
    {
        tree=(struct node*)malloc(sizeof(struct node));
        tree->left=insert(c,2*n+1);
        tree->data=c[n];
        tree->right=insert(c,2*n+2);
    }
    return tree;
}
void inorder(struct node* tree)
{
    if(tree!=NULL)
    {
        inorder(tree->left);
        printf("%c\t",tree->data);
        inorder(tree->right);
    }
}
void main()
{
    struct node* tree=NULL;
    char ch[]={'F','A','I','Z','\0','A','N','\0','S','\0','\0','\0','\0','\0','\0','\0','\0'};
    tree=insert(ch,0);
    inorder(tree);
}