#include<stdio.h>
void main()
{
    int i,j,max,a[10],x=0,y=1,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    while(sum<=max)
    {
        sum=x+y;
        x=y;
        y=sum;
        for(i=0;i<5;i++)
        {
            if(sum==a[i])
            printf("%d ",a[i]);
        }
    }
}