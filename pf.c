#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
        while(n%2==0)
        {
            printf("2\n");
            n=n/2;
        }

        for(i=3;i <= sqrt(n);i=i+2)
        {
            while(n%i==0)
            {
                printf("%d\n",i);
                n=n/i;
            }
        }

        if(n>2)
         printf("%d",n);
}