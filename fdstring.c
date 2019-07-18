#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,flag,count=0,x,y;
    char a[10],b[10];
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
    for(i=0;i<x;i++)
    {
        flag=0;
        for(j=0;j<y;j++)
        {
            if(a[i]==b[j])
            flag=1;
        }
        if(flag==0)
        count++;
    }
   
     for(i=0;i<y;i++)
    {
        flag=0;
        for(j=0;j<x;j++)
        {
            if(b[i]==a[j])
            flag=1;
        }
        if(flag==0)
        count++;
    }    
   printf("%d",count);   
}