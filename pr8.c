#include<stdio.h>
#pragma pack(1)
struct chck
{
    int x;
    char y;
}p;
void main()
{
    printf("%lu",sizeof(p));
}