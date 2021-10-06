#include<stdio.h>
#include<stdlib.h>
void partion(int a[10],int first,int last)
{
    int pivot,temp=0;
    int i,j;
    if(first<last)
    {
    pivot=first;
    i=first;
    j=last;
    while(i<j)
    {
        while(a[i]<=a[pivot])
        {
            i++;
        }
        while (a[j]>a[pivot])
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j];
    a[j]=a[pivot];
    a[pivot]=temp;
    partion(a,first,j-1);
    partion(a,j+1,last);
    }

}
void main()
{
    int a[10],lb=0,ub=9,i=0;
    printf("Enter the number in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    partion(a,lb,ub);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}