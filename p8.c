#include<stdio.h>
void main()
{
    int i,j,n,cnt=1;
    scanf("%d",&n);
    for(i=1;cnt<=n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                if(cnt<=n)
                printf("-%d ",cnt++);
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(cnt<=n)
                printf("%d ",cnt++);
            }
        }
    }
}