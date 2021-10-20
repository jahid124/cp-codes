#include<stdio.h>
int main()
{
    char a[100],b[100],f[100];
    int i,j,n,l,m;
    printf("Input String1: ");
    gets(a);
    printf("Input String2: ");
    gets(b);
    m=strlen(a);
    l=strlen(b);
    for(i=m+1,j=0;b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    a[i+1]='\0';
    puts(a);

}
