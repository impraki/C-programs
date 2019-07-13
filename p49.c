#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i=0,k=0,j=0,count=0;
    scanf("%s",a);
    while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    {
        count++;
        i++;
    }
    for(i=0;i<count;i++)
    {
        b[i]=a[i];
    }
    b[count]='\0';
    for(i=count-1;i>=0;i--)
    {
        a[j]=b[i];
        j++;
    }
    printf("%s\n",b);
    printf("%d\n",count);
    printf("%s",a);
}