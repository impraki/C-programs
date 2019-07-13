#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int count,i=0,j=0,c[26]= {0},d[26]={0};
    printf("enter the string");
    scanf("%s",a);
    while(a[i] !='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
            c[a[i]-'a']++;
        }
        i++;
    }
    printf("enter the string");
    scanf("%s",b);
    while(b[j] !='\0')
    {
        if(b[j]>='a' && b[j]<='z')
        {
            d[b[j]-'a']++;
        }
        j++;
    }
    for(i=0;i<26;i++)
    {
        if(c[i]==d[i])
         count=0;
         else
         {
             count=1;
             printf("not a anagram");
             break;
         }
    }
    if(count==0)
    printf("anagram");
}