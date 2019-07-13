#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    FILE *f;
    f=fopen("C:\\Users\\praki\\Desktop\\p1.txt","r");
    if(f==NULL)
    {
        printf("error opening file");
        exit(1);
    }
    fscanf(f,"%d",&num);
    printf("%d",num);
}