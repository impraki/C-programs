#include<stdio.h>
#include<string.h>
void main()
{
    int p,i=0,cnt=0;
    char *str;
    char x;
    char sr[10];
    printf("enter char to find freq");
    scanf("%c",&x);
    scanf("%s",sr);
    
    p=strlen(sr);
    str=sr;
    printf("%d\n",p);
    while(i<=p)
    {
        if(x==sr[i++])
        cnt++;
    }
    for(i=1;i<=p;i++)
    printf("%c\n",*str++);
    printf("feq of %c is %d",x,cnt);
}
