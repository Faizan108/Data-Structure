#include<stdio.h>
void main()
{
    int a[100],arr[10],ar[10];
    int n,i,k=0,j;
    printf("Enter the size of\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    arr[k]=a[0];
    for(i=1;i<n;i++)
    {
            for(j=k;j>=0;j--)
            {
                if(arr[k]>a[j]);
            }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    
}