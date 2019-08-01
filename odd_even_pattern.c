#include<stdio.h>
void main()
{
   int i,j,n,x=1,y=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d",x);
                x=x+2;
            }
            else
            {
                printf("%d",y);
                y=y+2;
            }
        }
        printf("\n");
    }
}
