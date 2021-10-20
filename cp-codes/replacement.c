#include<stdio.h>
int main()
{
    char a[100];
    printf("enter your string: ");
    gets(a);
    int i,x;
    //x=strlen(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }

    }
    printf("%s",a);
}
