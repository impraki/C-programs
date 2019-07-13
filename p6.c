#include<stdio.h>
void main()
{
    int a[]={10,22,33,57,89,46};
    int m,x,j,i,p,k,cnt=0;
    p=sizeof(a)/sizeof(a[0]);
    printf("%d",p);
    while(a[0]!='0')
    {
        printf("Enter the digit:");
        scanf("%d",&x);
        for(i=0;i<p;i++)
        {
            while(a[i]!=0)
            {
                k=a[i]%10;
                if(x==k)
                {
                    cnt=1;
                    if(i==p)
                    {
                        p--;
                    }
                    else
                    {
                    for(j=i;j<p;j++)
                    {
                    a[j]=a[j+1];
                    }
                    p--;
                    }
                      printf("changed array");
                for(m=0;m<p;m++)
                {
                printf("%d  ",a[m]);
                }
                }
                a[i]=a[i]/10;
            }
            if(p==0)
            {
                a[0]=0;
            }
            i++;
        }
        if(cnt==0)
        {
            printf("no numbers are valid");
        }
    }
}