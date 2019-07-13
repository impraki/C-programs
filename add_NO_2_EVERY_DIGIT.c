#include<stdio.h>
void main()
{
    int x,i=0,p=0,cnt=0,n,a[10];
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the number to add");
    scanf("%d",&x);
    while(n>0)
    {
        a[i++]=n%10;
        n=n/10;
        ++cnt;
    }
    for(i=cnt-1;i>=0;i--)
    {
        a[i]=a[i]+x;
    }
    for(i=cnt-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    for(i=cnt-1;i>=0;i--)
    {
        if(i==0)
        break;
        if(a[i-1]<10)
        {
        a[i]=a[i]*10;
        p=a[i]+a[i-1];
        a[i-1]=p;
        }
        else
        {
            a[i]=a[i]*100;
        p=a[i]+a[i-1];
        a[i-1]=p;
        }    
    }
    printf("%d",p);   
}
