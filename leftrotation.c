#include<stdio.h>
int main()
{
    int a[100],i,j,n,d,temp;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(d--!=0)
    {
        printf("check");
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}