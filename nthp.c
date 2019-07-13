#include<stdio.h>
int main()
{
    int p,n,i,j,count=0,c1=0,flag=0;
    scanf("%d",&p);
    scanf("%d",&n);
    for(i=p+1;c1<=n;i++)
    {
        count=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==1)
        {
            c1++;
            if(c1==n)
            {
                printf("%d",i);
            }
        }
    }
}