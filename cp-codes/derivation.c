#include<stdio.h>
#include<string.h>

/***

Input and Output:
Enter number of grammar: 4
Enter 4 grammar (L R):
S AbC
B aA
A aC
C bb
Enter final string: abbbbb

Derivation:
S => AbC => aCbC => abbbC => abbbbb
Parsing successful

***/

struct Pair
{
    char key;
    char value[1000];
};

int main()
{
    int n;
    char str[10000],s[10000];
    printf("Enter number of grammar: ");
    scanf("%d",&n);
    fflush(stdin);

    struct Pair pair[n+5];
    printf("Enter %d grammar (L R):\n",n);
    for(int i=0; i<n; i++)
    {
        fflush(stdin);
        scanf("%c",&pair[i].key);
        scanf("%s",&pair[i].value);
        if(pair[i].key=='S')
            strcpy(s,pair[i].value);
    }

    printf("Enter final string: ");
    fflush(stdin);
    scanf("%s",str);

    printf("\nDerivation:\nS => %s",s);

    int i=0;
    while(i<strlen(s))
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            for(int j=0; j<n; j++)
            {
                if(pair[j].key==s[i])
                {
                    char tem[10000];

                    for(int k=0; k<i; k++)
                    {
                        tem[k]=s[k];
                    }

                    int len=strlen(pair[j].value);
                    for(int k=0; k<len; k++)
                    {
                        tem[i+k]=pair[j].value[k];
                    }

                    for(int k=i+1; k<strlen(s); k++)
                    {
                        tem[k+len-1]=s[k];
                    }

                    strcpy(s,tem);
                    printf(" => %s",s);

                    break;
                }

            }
        }
        else
            i++;
    }

    if(strcmp(s,str)==0)
        printf("\nParsing successful\n");
    else
        printf("\nParsing failed\n");



}
