#include<stdio.h>
#include<string.h>

/*
    Input:
    Enter start symbol: S
    Enter number of production of S: 4
    Enter 4 production of S:
    asdfg
    ax
    asdvg
    asdxyz

    Output:
    After removing left factoring:

    S => aS'
    S' => sdfg | x | sdvg | sdxyz


*/

int main()
{
    printf("Enter start symbol: ");
    char s,c;
    scanf("%c",&s);
    printf("Enter number of production of %c: ",s);
    int n,len=100000,pos,f;
    scanf("%d",&n);
    char str[200][200],alpha[200];

    printf("Enter %d production of %c:\n",n,s);

    for(int i=0; i<n; i++)
    {
        scanf("%s",str[i]);
        if(len>strlen(str[i])) len=strlen(str[i]);
    }

    int p=0;
    for(int i=0; i<len; i++)
    {
        c=str[0][i];
        f=0;
        for(int j=0; j<n; j++)
        {
            if(str[j][i]!=c)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            pos=i;
            break;
        }
        else alpha[p++]=c;
    }

    printf("\nAfter removing left factoring:\n");
    printf("\n%c => %s%c'\n%c' => ",s,alpha,s,s);

    for(int i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            for(int x=pos; x<strlen(str[i]); x++) printf("%c",str[i][x]);
            printf(" | ");
        }
        else
        {
            for(int x=pos; x<strlen(str[i]); x++) printf("%c",str[i][x]);
            printf("\n\n");
        }
    }

    return 0;
}
