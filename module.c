#include<stdio.h>
void main()
{
    int a[10];
    int i,j,x,z,n,k,key=1;
    printf("enter the no of values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    do
    { 
    int cnt=0;
    printf("enter the digit");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        while(a[i]!=0)
        {
            k=a[i]%10;
            if(x==k)
            {
                cnt=1;
                printf("match available");
            }
            a[i]=a[i]/10;       
        }
    }
    if(cnt==0)
    {
        printf("match not available");
    }
    printf("(cntnue/exit-1/0)");
    scanf("%d",&z);
    }while(z==1);
}