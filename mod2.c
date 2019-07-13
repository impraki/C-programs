#include<stdio.h>
int checkmatch(int c[100],int p,int v)
{
    int i,z,m,cnt=0;
    for(i=0;i<p;i++)
    {
        while(c[i]!=0)
        {
            z=c[i]%10;
            if(z==v)
            {
                cnt=1;
                for(m=i;m<p;m++)
                {
                    c[i]=c[i+1];
                }
                p--;
                break;
            }
            c[i]=c[i]/10;
        }
        if(cnt==1)
        break;
    }
    printf("changed array");
    for(i=0;i<p;i++)
    {
        printf("%d ",c[i]);
    }
    return cnt;
}
void main()
{
    int a[100],i,j,n,d,x;
    printf("enter the no of values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the digit");
    scanf("%d",&x);
    d=checkmatch(a,n,x);
    if(d==1)
    {
        printf("match available");
    }
    else
    {
        printf("not available");
    }

}