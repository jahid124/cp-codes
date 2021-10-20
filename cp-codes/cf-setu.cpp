#include<bits/stdc++.h>
using namespace std;
double setp(double a)
{
    a=a*1000000;
    a=floor(a);
    a=a/1000000;
    return a;
}
int main()
{
    double a,b,c,beg,mid,end;

    scanf("%lf",&a);
    a=(double)(setp(a))/1.0;
    printf("%.6lf",a);
}
