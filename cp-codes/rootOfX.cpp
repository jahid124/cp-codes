#include<bits/stdc++.h>
using namespace std;

double root(double x)
{
    int m,b=0,e=x;
    double inc=0.1,ans;
    m=b+(e-b)/2;
    while(b<=e)
    {
        if(m*m==x)
            return m;
        else if(m*m<x)
        {
            b=m+1;
            ans=m;
        }
        else
            e=m-1;
        m=b+(e-b)/2;
    }

    for(int i=1;i<=10;i++)
    {
        while(ans*ans<=x)
        {
            ans=ans+inc;
        }
        ans-=inc;
        inc/=10;
    }
    return ans;

}
int main()
{
    cout<<setprecision(10)<<root(13)<<" "<<sqrt(13);
}
