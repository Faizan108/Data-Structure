#include<stdio.h>
void main()
{
    int a[10],i,n,pos,num;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    printf("enter the element to be delete\n");
    scanf("%d",&num);
    for (i = 0; i <n; i++)
    {
        if(num==a[i])
        {
            pos=i;
            break;
        }
        /* code */
    }
    for (i = pos; i <n-1; i++)
    {
        a[i]=a[i+1];
        /* code */
    }
    for (i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
        /* code */
    }
    
    
    
    
}