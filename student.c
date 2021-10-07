#include<stdio.h>
void main()
{
    int p,c,m,s;
    float avg;
    printf("enter the marks in p,c,m\n");
    scanf("%d",&p);
    scanf("%d",&c);
    scanf("%d",&m);
    s=p+c+m;
    avg=s/3;
    printf("avg=%f\n",avg);
    printf("s=%d",s);
}