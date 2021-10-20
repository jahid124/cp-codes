#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i;
    printf("enter any string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("first string was=%s\n",a);
    printf("second string is=%s\n",b);


}
