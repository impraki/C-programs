#include<stdio.h>
int fact(int f)
{
    if(f==0)
    return 1;
    
    return f*fact(f-1); 
}
int count(int a)
{
    int n,cnt=0,i=0,ar[10];
    while(a!=0)
    {
        n=a%10;
        a=a/10;
        ar[i++]=n;
        cnt++;
    }
    return cnt;
}
void main()
{
    int n,a,b,f,m;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d %d",&a,&b);
        f=count(a);
        m=fact(f);
        n--;
    }
    printf("%d\n",f);
    printf("permutation count=%d",m);
}