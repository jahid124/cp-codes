#include<stdio.h>
int main()
{
    char a[100];
    int i,j,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]<'a' || a[i]>'z') && (a[i]<'A' || a[i]>'Z'))
        {
            a[i]=32;
        }
    }
    printf("%s",a);
}
