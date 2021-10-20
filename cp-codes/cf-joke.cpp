#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a>b)
        swap(a,b);
    if(b%a==0)
        return a;
    return gcd(a,b%a);
}
int countd(int n)
{
    int c=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                c++;
            else
                c+=2;
        }
    }
    return c+2;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(gcd(a,b)==1)
            cout<<"1\n";
        else
            cout<<countd(gcd(a,b))<<"\n";
    }
    return 0;
}
