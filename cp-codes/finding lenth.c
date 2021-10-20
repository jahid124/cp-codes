#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int i,count=0;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;

    }
    printf("%d",count);
}
