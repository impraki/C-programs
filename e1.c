#include<stdio.h>
void rotleft(int a[10],int n,int r)
{
    int i,j,temp;
    for(i=0;i<r;i++)
    {
        temp=a[n];
        for(j=n;j>=0;j--)
        {
            if(j==0)
            a[j]=temp;
            else
            a[j]=a[j-1];
        }
    }
}
void main()
{
    int a[10],n,r,i;
    scanf("%d",&n);
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Rotated Array");
    rotleft(a,n-1,r);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}