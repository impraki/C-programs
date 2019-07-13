#include<stdio.h>
void main()
{
    int i,j,n,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        v=n;
        for(j=1;j<=i;j++)
        {
            printf("%d",v--);
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d",n+1-i);
        }
        printf("\n");
    }
}