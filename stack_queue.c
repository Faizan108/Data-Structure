#include<stdio.h>
int N=5;
int s1[5],s2[5];
int top1=-1,top2=-1,count=0;
void push1(int x)
{
    if(top1==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top1++;
        s1[top1]=x;
    }
}
void push2(int x)
{
    if(top2==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top2++;
        s2[top2]=x;
    }
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int i,a,b;
    if(top1==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("%d\n",b);
        count--;
        for(i=0;i<count;i++)
        {
            b=pop2();
            push1(b);
        }
    }
    
}
void display()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("%d ",s1[i]);
    }
    printf("\n");
}
void main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    display();


}