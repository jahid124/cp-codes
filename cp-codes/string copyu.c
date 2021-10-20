#include<stdio.h>
int main()
{
    char ch[100],a[100];
    int i;
    gets(ch);/*
    for(i=0;ch[i]!='\0';i++)
    {
        a[i]=ch[i];
    }
   a[i]='\0';*/

    strcpy(a,ch);
    printf("%s",a);


}
