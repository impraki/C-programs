#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    n=5;
    for(i=0;i<n;i++)
    {
        
            for(k=1;k<=(n-i);k++){
                printf("  ");
            }
            for(l=1;l<=(2*i-1);l++){
                printf("* ");
            }
            printf("\n");
        

    }
    return 0;
}
