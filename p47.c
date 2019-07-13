#include<stdio.h>
void main()
{
    char a[100],c,x;
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='1'&&a[i]<='9')
        {
            c=a[i-1];
            x=a[i];
            printf("%c",x);
            for(i=1;i<=x;i++)
            printf("%c",c);
            printf("\n");
        }
        
    }
}