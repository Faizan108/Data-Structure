#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    {
        return(0);
    }
    else if(n==1)
    {
        return(1);
    }
    return(fibo(n-1)+fibo(n-2));
}
void main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d,",fibo(i));
    }
}