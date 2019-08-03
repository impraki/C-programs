#include<stdio.h>
#include<string.h>
int main()
{
    char a[][8]={"defer","break","continue","for","default"};
    char s[10];
    int i,j,cnt=0,n;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<5;i++)
    {
        j=0;
        cnt=0;
        while(s[j]!='\0')
        {
            if(a[i][j]==s[j])
            cnt++;
            if(cnt==n)
            {
                printf("%s is a keyword",s);
                return 0;
            }
            j++;
        }
    }
    printf("%s is not a keyword",s);
    return 0;
}