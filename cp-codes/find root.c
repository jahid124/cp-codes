#include<stdio.h>
int main()
{
    double x,r=0.00001,n,m;
    int a;
    scanf("%lf",&m);
    while(r*r<m)
    {
        r=r+0.00001;
    }
    printf("%lf",r);
}
