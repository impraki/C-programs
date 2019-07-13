#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,chck=0,n1,n2,cnt1=0,cnt2=0;
    printf("Enter the no elements in a1");
    scanf("%d",&n1);
    printf("Enter the no elements in a1");
    scanf("%d",&n2);
    printf("enter 1st array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter 2nd array");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                cnt1=0;
                break;
            }
            else
            {
                cnt1=1;
            }
        }
        if(cnt1==1)
        {
            chck++;
            printf("%d is the extra element in array 1 in index=%d\n",a[i],i+1);
        }
    }
     for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                cnt2=0;
                break;
            }
            else
            {
                cnt2=1;
            }
        }
        if(cnt2==1)
        {
            chck++;
            printf("%d is the extra element in array 2 in index=%d\n",b[i],i+1);
        }
    }
    if(chck==0)
    {
        printf("no miss match elements");
    }
}