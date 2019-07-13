#include<stdio.h>
#include<string.h>
char* rev(char a[10],char b[10])
{
    int i,n,j=0;
    n=strlen(a);
    for(i=n-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    return b;
}
void main()
{
    char a[10],b[10];
    scanf("%s",a);
    char *c=rev(a,b);
    printf("%s",c);
}