#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<2*n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i;k++)
        {
            printf("* ");
        }
        printf("\n");

    }
    for(i=n;i>=1;i--)
    {
        for(j=2*n-i;j>=i;j--)
        {
            printf(" ");
        }
        for(k=2*i;k>=1;k--)
        {
            printf("* ");
        }
        printf("\n");

    }
}