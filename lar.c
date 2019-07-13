#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,temp,cnt=0,n,x,a[10],b[10];
    char s[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        while(a[i]!=0)
        {
            b[j]=a[i]%10;
            a[i]=a[i]/10;
            j++;
            cnt++;
        }
        for(j=0;j<n;j++)
        {
            if(b[j]<b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
        for(j=0;j<cnt;j++)
        {
            s[i][j]=b[j];
            
        }
        printf("%s",s[i]);
        /*
        if(s>a[i])
        {
            printf("%d\n",*s);
        }
        else{
            printf("-1\n");
        }*/
    }
}