#include<stdio.h>
int main()
{
    char a[100],b[100];
    int k,l,i=0,j;
    printf("enter two string\n");
    gets(a);
    gets(b);
    k=strlen(a);
    l=strlen(b);
    if(k==l)

    {
        for(i=0; a[i]==b[i]&&a[i]!='\0'; i++)
            //break;

            if(a[i]==b[i])
            {
                //printf("Match");
            }
            else
            {
                //printf("Not match\n");
            }

    }
    if(i==k)
    {
        printf("match");
    }
    else
        printf("not match");


}
