#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,b[10],cnt=0,c=1,x,k=0,temp,j,i=0,max=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        x=temp%10;
        b[i++]=x;
        if(x>max)
        max=x;
        temp=temp/10;
        cnt++;
    }
    printf("%d\n",max);
    int *a=(int*)malloc(sizeof(int)*max);
    temp=n;
    for(i=0;i<max;i++)
    a[i]=0;
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<b[k];j++)
        {
        a[j]=a[j]+c;
        }
        c=c*10;
        k++;
    }
    for(i=0;i<max;i++)
    {
        printf("%d+",a[i]);
    }
}