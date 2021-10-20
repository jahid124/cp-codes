#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s%s",&a,&b);

    printf("\nThis grammar is a: Universal Grammar");
    int f=0;
    if(strlen(a)<= strlen(b))
    {
        printf(", Context-Free Grammar");
        f=1;
    }

    if(f==1)
    {
        int x=0;
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]<='z' && a[i]>='a')
            {
                x=1;
                break;
            }
        }

        if(x==0)
        {
            printf(", Context-Sensitive Grammar");
            int y=0,z=0;
            for(int i=0; i<strlen(b); i++)
            {
                if(y==0)
                {
                    if(b[i]>= 'A' && b[i]<= 'Z')
                    {
                        y=1;
                    }
                }
                else
                {
                    if(b[i]>= 'a' && b[i]<= 'z')
                    {
                        z=1;
                        break;
                    }
                }
            }

            if(z==0)
            printf(", Regular Grammar");
        }
    }
    printf("\n");

    return 0;
}

