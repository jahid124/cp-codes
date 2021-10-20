#include<stdio.h>
int main()
{
    char a[100],b[100];
    int x,i,j,k;
    gets(a);
    x=strlen(a);
    k=x-1;

    for(i=0;i<x;i++)
    {
        b[i]=a[k];
        k--;
    }
    b[i]='\0';
    printf("%s",b);
}
