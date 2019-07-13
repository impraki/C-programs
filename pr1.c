#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    scanf("%s",a);
    int s,i,j;
    s=strlen(a);
    printf("%d\n",s);
    for(i=0;i<s;i++)
    {
    for(j=0;j<s;j++)
    {
        if(j==i)
        {
          printf("%c",a[i]);
        } 
        else if(j==(s-(i+1)))
        {
            printf("%c",a[s-(i+1)]);
        }
        else
        {
            printf(" ");
        }
           
    }
    printf("\n");
    }
}