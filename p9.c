#include<stdio.h>
void findfreq(int *a,int n)
{
    int b[10][1]={0},i,j,count;
    for(i=0;i<n;i)
    {
        j=i;
        count=1;
        while(a[j]==a[++i])
        {
            count++;
        }
        b[a[i-1]][0]=count;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<1;j++)
        {
            if(b[i][j]>0)
            printf("%d=%d\n",i,b[i][j]);
        }
    }
}
void main()
{
    int a[10],i,j,n,temp;
    printf("enter the number of values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\n");
   findfreq(a,n);
}