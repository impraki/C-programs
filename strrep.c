#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],c;
    int i,j,n,n1,count=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        c=a[i];
        while(a[i+1]==c)
        {
            count++;
            i++;
        }
    }
    printf("%d",count);
}