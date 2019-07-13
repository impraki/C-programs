#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int x,i,j,cnt=0;
    scanf("%[^\n]",a);
    while(a[i]!='\0')
    {
    if(a[i]==' '||a[i]=='.')
    {
        a[i]='\0';
        x=i;
        if(cnt==0)
        {
        for(j=x-1;j>=0;j--)
        {
            printf("%c",a[j]);
        }
        cnt++;
        printf(" ");
        }
        else
        {
            for(j=x-1;a[j]!='\0';j--)
            {
                printf("%c",a[j]);
            }
            printf(" ");
        }
    }
    i++;
    }
    for(j=i-1;a[j]!='\0';j--)
    {
        printf("%c",a[j]);
    }
}