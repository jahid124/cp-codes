#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter a string: ");
    char str[100];
    //scanf("%s",str);
    gets(str);
    int sz=strlen(str);

    printf("\n\nRelational operators are: ");
    for(int i=0; i<sz; i++)
    {
        if(str[i]=='+')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='-')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='*')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='/')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='^')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='=')
        {
            printf(" %c ",str[i]);
        }
        if(str[i]=='%')
        {
            printf(" %c ",str[i]);
        }
    }
    printf("\n\n");
    return 0;
}

