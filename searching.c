#include<stdio.h>
void linear_search(int a[],int n,int num)
{
    int i,c=0;
    for ( i = 0; i < n; i++)
    {
        if(num==a[i])
        {
            c=1;
            break;
        }
        /* code */
    }
    if (c==1)
    {
        printf("Found");
        /* code */
    }
    else
    {
        printf("not found");
    }
}
void bubble_search(int a[],int n,int num)
{
    int i,ub=n-1,c=0,lb=0,p=0;
    p=(ub+lb)/2;
    while(p>0)
    {
    p=(ub+lb)/2;
    if(a[p]>num)
    {
        ub=p-1;
    }
    if(a[p]<num)
    {
        lb=p+1;
    }
    if(a[p]==num)
    {
        c=1;
        break;
    }
    }
    if(c==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}
void main()
{
    int arr[10],n,num,c,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    printf("Enter 1 for binary search and 2 for linear search\n");
    scanf("%d",&c);
    printf("enter the number to be search\n");
    scanf("%d",&num);
    if (c==1)
    {
        bubble_search(arr,n,num);
        /* code */
    }
    if(c==2)
    {
        linear_search(arr,n,num);
    }
}