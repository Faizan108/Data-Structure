#include<stdio.h>
#define N 10
char c[N]="(8*(5+1))";
int top=-1;
void push(char ch)
{
    if(top==N)
    {
        printf("Stack is full\n");
    }
    else{
        top=top+1;
        c[top]=ch;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        top--;
    }
}
void main()
{
    int i,l;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='(')
        {
            push(c[i]);
        }
        if(c[i]==')')
        {
            if(top==-1)
            {
                printf("Not Valid\n");
            }
            else{
                pop();
            }
        }
    }
    if(top==-1)
    {
        printf("Valid expression\n");
    }
    else{
        printf("Not Valid Expression\n");
    }
}