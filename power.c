#include<stdio.h>
void main()
{
    int n,b,i,s=1;
    printf("Enter the power\n");
    scanf("%d",&n);
    printf("Enter the base value\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        s=s*n;
    }
    printf("%d",s);
}