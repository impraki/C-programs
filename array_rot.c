#include<stdio.h>
void rotleft(int a[10],int n,int r)
{
    int i,j,temp;
   for(i=0;i<r;i++)
   {
       temp=a[0];
       for(j=0;j<n-1;j++)
       {
           a[j]=a[j+1];
       }
       a[j]=temp;
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
    rotleft(a,n,r);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
