#include<stdio.h>
int main()
{
    char a[100],b[100],c[100];
    printf("enter first string: ");
    gets(a);
    printf("enter second string: ");
    gets(b);
    int x,y,z,i;
    x=strlen(a);
    y=strlen(b);
    z=x<y?x:y;
    for(i=0;i<z;i++)
    {
        if(a[i]!=b[i])
        {
          printf("not match");
          break;
        }

    }
    if(a[i]==b[i])
    {
        printf("match");
    }
}
