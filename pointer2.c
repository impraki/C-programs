#include<stdio.h>
#include<stdio.h>
void fun(int *ptr)
{
    *ptr=10;
}
void main()
{
    int n=18;
    int *p=&n;
    fun(p);
    printf("%d,%d",n,*p);
}