#include<stdio.h>
void main()
{
    char s[]={'1','2','3','\0'};
    int b=sizeof(s)/s[0];
    printf("%c",s[3]);
}
