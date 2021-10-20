#include<stdio.h>
int main()
{
    char a[100],b[100],c[100];
    printf("enter first string: ");
    gets(a);
    printf("enter second string: ");
    gets(b);
    int x,i;
    x=strlen(a);
    for(i=0;b[i]!='\0';i++,x++)
    {
        a[x]=b[i];
    }
    a[x]='\0';
    printf("After adding= %s",a);
}
