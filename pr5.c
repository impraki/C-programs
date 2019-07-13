#include<stdio.h>
int main()
{
    int t,n,s,a[10],count=0,i,k,j,sum=0;
    printf("Test cases");
    scanf("%d",&t);
    while(t)
    {
        printf("NUMBER OF ELEMENTS");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter sum");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
            sum=a[i];
            for(j=i+1;j<=n;j++)
            {
                if(sum==s)
                {
                    printf("%d-%d",i,j-1);
                    return 0;
                }
                if(sum>s)
                break;
                sum=sum+a[j];
            }
        }
       
        t--;
    }
}