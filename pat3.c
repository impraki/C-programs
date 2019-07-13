#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    m=i-1;
    for(j=i;j<=n-1;j++)
    {
        printf("  ");
    }
    for(k=1;k<=2*i-1;k++)
    {
        if(k<=i)
        {
            printf("%d ",++m);
        }
        else{
            printf("%d ",--m);
        }
    }
    printf("\n");
}
    return 0;
}
