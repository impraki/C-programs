#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    printf("2\n");
    scanf("%c", &c);

    if( c != '\n')
    {
        reverseSentence();
        printf("1\n");
        printf("%c",c);
    }
}