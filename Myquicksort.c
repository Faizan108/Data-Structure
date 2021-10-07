#include<stdio.h>
void quick(int a[10],int lb,int ub)
{
    int temp=0,start=lb,end=ub;
    int pivot=a[lb];
    while(start<end)
    {
        while(a[start]<pivot)
        {
            start++;
        }
        while (a[end]>pivot)
        {
            end--;
        }
        if(start<=end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[end];
    a[end]=a[lb];
    a[lb]=temp;
    quick(a,lb,end-1);
    quick(a,end+1,ub);
    
}

void main()
{
    int a[10],i=0,lb=0,ub=9;
    printf("Enter the numbers\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,lb,ub);
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
    
}