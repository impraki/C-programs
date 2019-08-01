#include<stdio.h>
#include<string.h>
int foo(char *v)
{
    v++;
    
}
void main()
{
    char s[]={"geeks quiz"};
    int x=strlen(s);
    int p=foo(s);
    printf("%c %d",s[3],x);
    printf("\n%d",p);
}
