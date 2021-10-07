#include<stdio.h>
void main()
{
    int a[10],i,n,num,no,pos;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the element after which number has to be insert");
    scanf("%d",&num);
    printf("enter the number to be insert");
    scanf("%d",&no);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            pos=i;
            break;
        }
    }
    for(i=n-2;i>pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=no;
    for (i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}