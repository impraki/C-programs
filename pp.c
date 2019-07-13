#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=1;
        for(i=1;k<=n;i++)
        {
            if(i%2==0)
            {
                for(j=1;j<=i;j++)
                printf("-%d ",k++);
            }
            else
            {
                for(j=1;j<=i;j++)
                printf("%d ",k++);
            }
            
        }
}