#include<stdio.h>
#include<string.h>

/**
    S=1
    F={2}
    S1={(a,1), (b,2)}
    S2={(a,2), (b,2)}
**/

int main()
{
    char str[100]={"aaabaa"};
    int i=0,j,L=1,F[2]={2},s=1;
    char c;
    while(i<strlen(str))
    {
        c=str[i];
        if(s==1)
        {
            if(c=='a')
            {
                s=1;
                i++;
            }
            else if(c=='b')
            {
                s=2;
                i++;
            }

            else
            {
                printf("Input not correct\n");
                return 0;
            }
        }

        else if(s==2)
        {
            if(c=='a')
            {
                i++;
            }
            else if(c=='b')
            {
                i++;
            }

            else
            {
                printf("Input not correct\n");
                return 0;
            }
        }

        else
        {
            printf("Parsing failed\n");
            return 0;
        }
    }

    int flag=0;
    for(int i=0; i<L; i++)
    {
        if(F[i]==s)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("String accepted\n");
    else printf("Parsing failed\n");

    return 0;
}

