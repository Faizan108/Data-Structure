#include<stdio.h>
void main()
{
    int arr[100],i,j,n,p;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=1;i<n-1;i++)
    {
        p=1;
        while(p<=n-i)
        {
            if(arr[p]>arr[p+1])
            {
                arr[p]=arr[p+1];
            }
            p=p+1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}