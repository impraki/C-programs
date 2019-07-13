#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    FILE *f;
    f=fopen("C:\\Users\\praki\\Desktop\\p1.txt","w");
    if(f==NULL)
    {
    printf("error");
    exit(1);
    }
    printf("enter num");
    scanf("%d",&num);
    fprintf(f,"%d",num);
    fclose(f);
}