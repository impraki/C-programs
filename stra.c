#include<stdio.h>
#include<string.h>
void main()
{
    char a[10][10];
    char l='a';
    int c[100];
    int i,n,x,j;
    for(i=0;i<26;i++)
    {
        c[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        while(a[i][j]!='\0')
        {
            x=a[i][j]-'a';
            c[x]++;
            j++;
        }
    }
    for(i=0;i<26;i++,l++)
    {
        printf("%c==%d\n",l,c[i]);
    }
}
    
    