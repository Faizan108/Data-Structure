#include<stdio.h>
int fact(int n)
{
    int f=n;
    if(n==0)
    {
        return(1);
    }
    if(n>0)
    {
    f=f*fact(n-1);
    }
    return f;
}
void main()
{
    int b;
    b=fact(5);
    printf("%d",b);
}