#include<stdio.h>
#include<string.h>
void find_freq(char *a,int n)
{
    int i,count=0;
    char f;
    f=a[n];
    for(i=1;i<n-1;i+2)
    {
        if(a[i]==f)
        {
            count++;
        }
    }
    printf("%d",count++);
    if(count==0)
    printf("NOT PRESENT");
}
void insert(char a[])
{
    int l;
    scanf("%s",a);
    l=strlen(a);
    find_freq(a,l-1);
}
void main()
{
    char a[10];
     insert(a);
    return;
}