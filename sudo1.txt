#include<stdio.h>
void main()
{
    int a[10],i=-1,j,n,sum1,sum2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a[++i]=n%10;
        n=n/10;
    }
    j=i;
    sum1=a[0]+a[j];
    for(i=1;i<j;i++)
    {
        sum2=sum2+a[i];
    }
    if(sum1==sum2)
    printf("yes");
    else
    printf("no");
}