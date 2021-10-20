#include<stdio.h>
int main()
{
    char a[100],b[100],c[100];
    gets(a);
    int i,x,y=0;
    x=strlen(a);
    for(i=0;i<x/2;i++)
    {
        b[i]=a[i];
    }

    printf("%s\n",b);
    for(i=x/2;i<x;i++)
    {
        c[y]=a[i];
        y++;
    }
    printf("%s",c);
}
