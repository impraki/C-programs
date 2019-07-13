#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,c,d,e;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            e=0;
            c=i;
            d=j;
            for(e=0;e<=i;e++)
            {
            printf("%d ",a[c][d]);
            c--;
            d++;
            }

        }
        printf("\n");
    }

}