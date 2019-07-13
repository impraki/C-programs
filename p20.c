#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(k=1;k<=n-i;k++)
            {
                printf(" ");
            }
        for(j=1;j<=i;j++)
        {
           
            if(j==1||j==i)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
}