#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==b && c==d)
        {
            printf("YES\n");
        }
        else if(a==c && b==d)
        {
            printf("YES\n");
        }
        else if(a==d && b==c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

}
