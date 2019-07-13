#include<stdio.h>
void main()
{
    int n,i,j=0,l,m;
    char a[10],c[10][10];
    scanf("%s",a);
    while(a[i]!='\0')
    {
        l=0;
        if(a[i]>'0'&&a[i]<='9')
        {
             n=a[i]-48;
        }
        i++;
        if(a[i++]=='(')
        {
            while(a[i]!=')')
            {
                c[j][l++]=a[i];
                i++;
            }
        }
        printf("%d\n",n);
        for(m=0;m<n;m++)
        {
            printf("%s\n",c[j]);
        }
        i++;
        j++;
    }
}