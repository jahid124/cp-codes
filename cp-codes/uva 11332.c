#include<stdio.h>
int main()
{
    long int n;
    int s;
    while(scanf("%ld",&n) && n!=0)
    {
        while(n>9)
        {
            int x=n;
            s=0;
            while(x!=0)
            {
                s+=x%10;
                x=x/10;
            }
            n=s;
        }
        printf("%d\n",n);
    }

}
